#include<stdio.h>
struct nick
{
	int vo,va;
}b[1001];
int max(int x,int y)
{
	return x>y? x : y;
}
int dp[1001];
int main()
{
	int t,n,v,i,j;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&v);
		for(i=0;i<=v;i++)
			dp[i]=0;
		for(i=1;i<=n;i++)
			scanf("%d",&b[i].va);
		for(i=1;i<=n;i++)
			scanf("%d",&b[i].vo);
		for(i=1;i<=n;i++)
			for(j=v;j>=b[i].vo;j--)
				dp[j]=max(dp[j],dp[j-b[i].vo]+b[i].va);
		printf("%d\n",dp[v]);
	}
	return 0;
}