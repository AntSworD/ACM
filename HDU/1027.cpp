#include <stdio.h>

int seq[8], n, m, base, mn;
bool flag[9];

void chose(int k)
{
	if(k == mn)
	{
		m --;
		if(m == 0)
		{
			for(int i = 0; i < mn - 1; ++ i)
				printf("%d ", seq[i] + base);
			printf("%d\n", seq[mn - 1] + base);
		}
		return ;
	}
	for(int i = 1; i <= mn; ++ i)
	{
		if(flag[i])
		{
			seq[k] = i;
			flag[i] = false;
			chose(k + 1);
			flag[i] = true;
		}
	}
}

int main()
{
	while(~scanf("%d %d", &n, &m))
	{
		for(int i = 0; i < 9; ++ i)
			flag[i] = true;
		if(n > 8)
		{
			for(int i = 1; i <= n - 8; ++ i)
				printf("%d ", i);
			base = n - 8;
			mn = 8;
			chose(0);
		}
		else
		{
			mn = n;
			base = 0;
			chose(0);
		}
	}
	return 0;
}