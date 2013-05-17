//author : zhengjj.asd@gmail.com
//将最大耗费记录下，最后留下5块钱，用于购买最大耗费，可使结果最小
//除去最大耗费后，问题就成了背包容量为 （m - 5） 01背包问题

#include <stdio.h>
#include <string.h>

inline int int_max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int n;
	int c[1001];
	while(scanf("%d", &n) && n != 0)
	{
		int max = 0;
		for(int i = 0; i < n; ++ i)
		{
			scanf("%d", &c[i]);
			if(c[max] < c[i])
				max = i;
		}
		int m;
		scanf("%d", &m);
		if(m < 5)
		{
			printf("%d\n", m);
			continue ;
		}
		int f[1001];
		memset(f, 0, sizeof(f));
		for(int i = 0; i < n; ++ i)
		{
			if(i == max) continue;
			for(int v = m -5; v >= c[i]; -- v)
				f[v] = int_max(f[v], f[v - c[i]] + c[i]);
		}
		printf("%d\n", m - f[m - 5] - c[max]);
	}
	return 0;
}