#include<stdio.h>
int main()
{
	int n,i,k;
	while(scanf("%d",&n)!=EOF)
	{
		__int64 s=1;
		int a[100001];
		k=0;
		for(i=n;i>=1;i--) 
		{
			s=s*i;
			
		}
		printf("%I64d\n",s);
	}
	return 0;
}