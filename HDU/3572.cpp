#include <iostream>
#include <queue>
#include <cstdio>
#include <cstring>
using namespace std;

#define Max 501

int start[Max], ed[Max], n, m, maxf, sum;
int map[Max][Max];

void init()
{
	memset(start, 0, sizeof(start));
	memset(ed, 0, sizeof(ed));
	memset(map, 0, sizeof(map));
	scanf("%d %d", &n, &m);
	sum = 0;
	for(int i = 1; i <= n; ++ i)
	{
		int p, s, e;
		scanf("%d %d %d", &p, &s, &e);
		start[i] = p;
		sum += p;
		for(int j = s; j <= e; ++ j)
		{
			map[i][j] = 1;
			ed[j] = m;
		}
	}
	maxf = 0;
}

void FordFulkerson()
{
	int s = 0;
	int cur = 0;
	int tmps = 0;
	while(1)
	{
		s ++;
		if(s > sum) break;
		if(s > tmps)
		{
			while(start[++cur] == 0 && cur <= n);
			if(cur > n) break;
			tmps += start[cur];
		}
		int i;
		for(i = 1; i <= 500; ++ i)
			if(map[cur][i] > 0)
				break;
		if(i > 500 || ed[i] <= 0) continue;
		maxf ++;
		map[cur][i] --;
		start[cur] --;
		ed[i] --;
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

		printf("Case %d: ", i);
		if(sum == maxf)
			printf("Yes\n\n");
		else
			printf("No\n\n");
	}
	return 0;
}