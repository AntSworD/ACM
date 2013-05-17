#include<stdio.h>
int main()
{
	long n;
	while(scanf("%ld",&n)!=EOF)
	{
		printf("%ld\n",((n*n*n+5*n)/6)+1);
	}
	return 0;
}