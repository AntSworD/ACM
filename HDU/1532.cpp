//author:zhengjj.asd@gmail.com

#include <iostream>
#include <queue>
#include <cstring>
using namespace std;

#define Max 10000000
#define M 201

int n, m, maxflow;
int map[M][M], pre[M];
bool mark[M];

void init()
{
	memset(map, 0, sizeof(map));
	int s, e, c;
	for(int i = 0; i < n; ++ i)
	{
		scanf("%d %d %d", &s, &e, &c);
		map[s][e] += c;
	}

	maxflow = 0;
}

void FordFulkerson()
{
	while(1)
	{
		queue <int> q;
		memset(mark, false, sizeof(mark));
		memset(pre, 0, sizeof(pre));
		q.push(1);
		mark[1] = true;
		while(!q.empty())
		{
			int cur = q.front();
			q.pop();
			if(cur == m) break;
			for(int i = 1; i <= m; ++ i)
			{
				if(mark[i] == false && map[cur][i] > 0)
				{
					q.push(i);
					mark[i] = true;
					pre[i] = cur;
				}
			}
		}
		if(mark[m] == false) break;
		int min = Max;
		int i = m;
		while(i != 1)
		{
			if(min > map[pre[i]][i])
				min = map[pre[i]][i];
			i = pre[i];
		}

		i = m;
		while(i != 1)
		{
			map[pre[i]][i] -= min;
			map[i][pre[i]] += min;
			i = pre[i];
		}
		maxflow += min;
	}
}

int main()
{
	while(~scanf("%d %d", &n, &m))
	{
		init();
		FordFulkerson();
		printf("%d\n", maxflow);
	}
	return 0;
}