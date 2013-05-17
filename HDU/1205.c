#include<stdio.h>
int main()
{
	__int64 t;
	scanf("%I64d",&t);
	while(t--)
	{
		__int64 n,max=0,sum=0,i=0,a;
		scanf("%I64d",&n);
		while(n--)
		{
			scanf("%I64d",&a);
			sum+=a;
			if(a>=max) 				
				max=a;
		}
		if(2*max-sum<=1) printf("Yes\n");
		else printf("No\n");
	}
	return 0;
}