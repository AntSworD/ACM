#include<stdio.h>
int main()
{
	int m,k;
	while(scanf("%d %d",&m,&k) && m + k != 0)
	{
		int s = m,n=1;
		while(n != 0)
		{
			n = m / k;
			m = m % k + n ;
			s += n ;
		}
		printf("%d\n",s);
	}
	return 0;
}