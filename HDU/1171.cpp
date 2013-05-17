//author: zhengjj.asd@gmail.com
//��Ϊÿ�����õ���������������Կ���ʹ��01�������
//ֻҪ����������豸�ܼ�ֵһ��Ϊ�����ı������ܷ��������ֵ����

#include <stdio.h>
#include <string.h>

inline int max(int a, int b)
{
	return a > b ? a : b;
}

int main()
{
	int n;
	while(scanf("%d", &n) && n >= 0)
	{
		int v[51], m[51];
		int sum = 0;
		for(int i = 0; i < n; ++ i)
		{
			scanf("%d %d", &v[i], &m[i]);
			sum += v[i] * m[i];
		}

		int f[125001];
		int helf = sum / 2;

		memset(f, 0, sizeof(f));
		for(int i = 0; i < n; ++ i)
			for(int j = 0; j < m[i]; ++ j)
				for(int k = helf; k >= v[i]; -- k)
					f[k] = max(f[k], f[k - v[i]] + v[i]);
		int ava = f[helf];
		if(ava < sum - ava)
			ava = sum - ava;
		printf("%d %d\n", ava, sum - ava);
	}

	return 0;
}