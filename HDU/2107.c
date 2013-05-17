#include<stdio.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)&&n!=0)
	{
		long int m,max=0;
		for(i=0;i<n;i++)
		{
			scanf("%ld",&m);
			if(m>max) max=m;
		}
		printf("%ld\n",max);
	}
	return 0;
}