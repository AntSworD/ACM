#include<stdio.h>
#include<string.h>
struct point
{
	int feng,num;
};
int main()
{
	point s[9];
	int t,n,k,a,b,i,j,dp[45];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&k);
		memset(dp,0,sizeof(dp));
		for(i=1;i<=k;i++)
			scanf("%d %d",&s[i].feng,&s[i].num);
		for(i=1;i<=k;i++)
		{
			if(s[i].feng * s[i].num >= n)
			{
				for(j=s[i].feng;j<=n;j++)
					if(dp[j-s[i].feng]+s[i].feng>dp[j])
						dp[j]=dp[j-s[i].feng]+s[i].feng;
			}
			else
			{
				int k=1,h=s[i].num;
				while(k<s[i].num)
				{
					for(j=n;j>=s[i].feng*k;j--)
						if(dp[j-s[i].feng*k]>dp[j])
							dp[j]=dp[j-s[i].feng*k]+s[i].feng*k;
					h-=k;
					k*=2;
				}
				for(j=n;j>=s[i].feng*h;j--)
						if(dp[j-s[i].feng*h]>dp[j])
							dp[j]=dp[j-s[i].feng*h]+s[i].feng*h;
			}
		}
		printf("%d\n",dp[n]);
	}
	return 0;
}