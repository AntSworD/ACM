//author:zhengjj.asd@gmail.com
//Ҫȡaiλ�õĻƽ�Ļ��������б��һ������ԭ��ľ����ai���ĵ��ȫȡ��
//���Կ��Ը���б�ʽ��з��飬��ÿ���еĵ�i��λ�ã��Ѻ�ԭ��ľ������λ��
//�ļ�ֵ�ͻ���ȫ���ӵ���i��λ�õĻƽ��ϣ�����ȡĳ��λ�õĻƽ�ʹ���ѱ���ȡ��Ҳȡ��
//�����ͳ��˷��鱳������Ҫ�������ת��

//ps:������ʱ���������ȥ�����������һ���Ĵ���һ�ֲ����ٽ��͹��ˣ��벻ͨ���ѵ��Ǳ����������ǲ�ͬ�ģ�
//����ԭ�������д�����ĵģ�

//���鱳������ȥ�������Ž�..

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