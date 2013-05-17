#include <stdio.h>
#include <string.h>
int main ()
{
	int n,t;
	scanf("%d",&t);
	while( t -- )
	{
		scanf("%d",&n);
		int i, j;
		for(i = 0 ; i < n ; i ++)
		{
			for(j = 0 ; j < n ; j ++)
			{
				if(i == j && i != n / 2)
					printf("X");
				else if( i + j == n - 1 )
				{
					printf("X");
				}
				else if( i > j || i + j < n - 1)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}