#include<stdio.h>
int main()
{
	int dp[10001],a[3]={150,200,350},t,n;
	scanf("%d",&t);
	while(t--)
	{
		int i,j;
		scanf("%d",&n);
		for(i=0;i<=n;i++)
			dp[i]=0;
		for(i=0;i<3;i++)
			for(j=a[i];j<=n;j++)
				if(dp[j-a[i]]+a[i]>dp[j])
					dp[j]=dp[j-a[i]]+a[i];
		printf("%d\n",n-dp[n]);
	}
	return 0;
}