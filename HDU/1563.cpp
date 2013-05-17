#include<stdio.h>
int main()
{
	int t,n,res,k;
	while(scanf("%d",&n)&&n!=0)
	{
		res=0;
		for(t=0;t<n;t++)
		{
			scanf("%d",&k);
			res^=k;
		}
		printf("%d\n",res);
	}
	return 0;
}