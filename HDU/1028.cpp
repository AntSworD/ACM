#include <stdio.h>

int a[121][121];

int main()
{
	for(int i = 1; i < 121; ++ i)
		for(int j = 1; j < 121; ++ j)
		{
			if(i == 1 || j == 1)
				a[i][j] = 1;
			else if(i == j)
				a[i][j] = a[i - 1][j] + 1;
			else if(i > j)
				a[i][j] = a[i - 1][j];
			else
				a[i][j] = a[i - 1][j] + a[i][j - i];
		}
	int n;
	while(~scanf("%d", &n))
		printf("%d\n", a[n][n]);
	return 0;
}