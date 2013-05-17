#include<stdio.h>
int main()
{
	int n,m,t,i=0;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		printf("Case %d: ",++i);
		if((n%2&&m==1)||m>=n)
			printf("first\n");
		else 
			printf("second\n");
	}
	return 0;
}