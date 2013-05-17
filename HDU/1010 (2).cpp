#include <iostream>
#include <cstdio>
#include <cstring>
#include <queue>
using namespace std;

int point[101][5], ma[101][101];
int value[101], n, T, Max;

bool vis[101][101];

void dfs(int x, int s, int v)
{
	if(s > T)
		return;
	if(x == n && Max < v)
		Max = v;
	for(int i = 1; i <= point[x][0]; ++ i)
	{
		if(!vis[x][point[x][i]])
			continue;
		vis[x][point[x][i]] = false;
		v += value[point[x][i]];
		int tmp = value[point[x][i]];
		value[point[x][i]] = 0;
		dfs(point[x][i], s + ma[x][point[x][i]], v );
		vis[x][point[x][i]] = true;
		v -= tmp;
		value[point[x][i]] = tmp;
	}
}

int main()
{
	while(~scanf("%d %d", &n, &T))
	{
		memset(point, 0, sizeof(point));
		memset(ma, 0, sizeof(ma));
		memset(value, 0, sizeof(value));
		memset(vis, true, sizeof(vis));
		for(int i = 1; i < n; ++ i)
		{
			int a, b, c;
			scanf("%d %d %d", &a, &b, &c);
			point[a][0] ++;
			point[a][point[a][0]] = b;
			point[b][0] ++;
			point[b][point[b][0]] = a;
			ma[a][b] = ma[b][a] = c;
		}
		for(int i = 1; i <= n; ++ i)
			scanf("%d", &value[i]);
		Max = -1;
		dfs(1, 0, value[1]);
		if(Max < 0)
			printf("Human beings die in pursuit of wealth, and birds die in pursuit of food!\n");
		else
			printf("%d\n", Max);
	}
	return 0;
}