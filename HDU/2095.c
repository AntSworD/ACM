#include<stdio.h>
int main()
{
	long n,i,a,b;
	while(scanf("%ld",&n)&&n)
	{
		scanf("%ld",&a);
		for(i=1;i<n;i++)
		{
			scanf("%ld",&b);
			a=a^b;
		}
		printf("%ld\n",a);
	}
	return 0;
}
