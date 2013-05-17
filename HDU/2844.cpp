// author: zhengjj.asd@gmail.com
// ¶àÖØ±³°ü

#include <stdio.h>
#include <string.h>
#define N 110
#define M 100010

int f[M];
bool use[M];

inline int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int n, m;
	while(scanf("%d %d", &n, &m) && (n != 0 || m != 0))
	{
		int a[N], c[N];
		for(int i = 0; i < n; ++ i)
			scanf("%d", &a[i]);
		for(int i = 0; i < n; ++ i)
			scanf("%d", &c[i]);
		int cout = 0;

		memset(f, 0, sizeof(f));
		memset(use, false, sizeof(use));
		for(int i = 0; i < n; ++ i)
		{
			if(a[i] * c[i] > m)
			{
				for(int v = a[i]; v <= m; ++ v)
				{
					f[v] = max(f[v], f[v - a[i]] + a[i]);
					if(!use[f[v]])
					{
						cout ++;
						use[f[v]] = true;
					}
				}
				continue ;
			}
			int k = 1;
			while(k < c[i])
			{
				for(int v = m; v >= k * a[i]; -- v)
				{
					f[v] = max(f[v], f[v - k * a[i]] + k * a[i]);
					if(!use[f[v]])
					{
						cout ++;
						use[f[v]] = true;
					}
				}
				c[i] -= k;
				k = k * 2;
			}
			for(int v = m; v >= c[i] * a[i]; -- v)
			{
				f[v] = max(f[v], f[v - c[i] * a[i]] + c[i] * a[i]);
				if(!use[f[v]])
				{
					cout ++;
					use[f[v]] = true;
				}
			}
		}

		printf("%d\n", cout);
	}
	return 0;
}