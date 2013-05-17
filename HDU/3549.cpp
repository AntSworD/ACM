//author: zhengjj.asd@gmail.com

#include <iostream>
#include <cstring>
#include <cstdio>
#include <queue>
using namespace std;

#define Max 10000000;
#define N 16

int n, m, maxf;
int E[N][N], pre[N];
bool mark[N];

void init()
{
	memset(E, 0, sizeof(E));
	scanf("%d %d", &n, &m);
	for(int i = 0; i < m; ++ i)
	{
		int x, y, c;
		scanf("%d %d %d", &x, &y, &c);
		E[x][y] += c;
	}
	maxf = 0;
}

void FordFulkerson()
{
	while(1)
	{
		queue <int> q;
		memset(pre, 0, sizeof(pre));
		memset(mark, false, sizeof(mark));
		q.push(1);
		mark[1] = true;
		while(!q.empty())
		{
			int cur = q.front();
			q.pop();
			if(cur == n) break;
			for(int i = 1; i <= n; ++ i)
			{
				if(!mark[i] && E[cur][i] > 0)
				{
					q.push(i);
					mark[i] = true;
					pre[i] = cur;
				}
			}
		}
		if(!mark[n]) break;
		int min = Max;
		for(int i = n; i != 1; i = pre[i])
		{
			if(min > E[pre[i]][i])
				min = E[pre[i]][i];
		}
		for(int i = n; i != 1; i = pre[i])
		{
			E[pre[i]][i] -= min;
			E[i][pre[i]] += min;
		}
		maxf += min;
	}
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; ++ i)
	{
		init();
		FordFulkerson();
		printf("Case %d: %d\n", i, maxf);
	}
	return 0;
}