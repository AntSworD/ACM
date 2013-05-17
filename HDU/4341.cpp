//author:zhengjj.asd@gmail.com
//要取ai位置的黄金的话，必须把斜率一样，和原点的距离比ai近的点给全取了
//所以可以根据斜率进行分组，对每组中的第i个位置，把和原点的距离近的位置
//的价值和花费全部加到第i个位置的黄金上，这样取某个位置的黄金就代表把必须取的也取了
//这样就成了分组背包，主要就是这个转化

//ps:比赛的时候死活过不去，结果过两天一样的代码一字不动再交就过了，想不通，难道是比赛的数据是不同的？
//还是原来数据有错，后面改的？

//分组背包可以去看背包九讲..

#include <stdio.h>
#include <string.h>

int f[40010];

struct node{
	double k;
	int x, y;
	int value, cost;
};
node list[210][210];

inline int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int cou[210];
	int n, t, tt = 0;
	while(~scanf("%d %d", &n, &t))
	{
		tt ++;
		int kk = 0;
		memset(list, 0, sizeof(list));
		memset(cou, 0, sizeof(cou));
		node in[201];
		for(int i = 0; i < n; ++ i)
		{
			scanf("%d %d %d %d", &in[i].x, &in[i].y, &in[i].cost, &in[i].value);
			in[i].k = in[i].x * 1.0 / in[i].y;
			if(in[i].k == 0)
				in[i].k = 3000;
		}
		for(int i = 0; i < n; ++i)
		{
			int x, y;
			x = in[i].x;
			y = in[i].y;
			double k = x * 1.0 / y;
			if(k == 0)
				k = 3000;
			int j = 0;
			while(j < kk && list[j][0].k != k)
				j ++;
			int value = 0, cost = 0;
			for(int q = 0; q < n; ++ q)
			{
				if(in[q].k == k && in[q].x * in[q].x + in[q].y * in[q].y <= x * x + y * y)
				{
					value += in[q].value;
					cost += in[q].cost;
				}
			}
			if(j == kk)
				kk ++;
			list[j][cou[j]].x = x;
			list[j][cou[j]].y = y;
			list[j][cou[j]].value = value;
			list[j][cou[j]].cost = cost;
			list[j][cou[j]].k = k;
			cou[j] ++;
		}
		memset(f, 0, sizeof(f));
		for(int j = 0; j < kk; ++ j)
		{
			for(int v = t; v >= 0; -- v)
			{
				for(int i = 0; i < cou[j]; ++ i)
				{
					if(v - list[j][i].cost >= 0 )
						f[v] = max(f[v], f[v - list[j][i].cost] + list[j][i].value);
				}
			}
		}
		printf("Case %d: %d\n", tt, f[t]);
	}
	return 0;
}