#include<stdio.h>
int dp[2001][2001];
int main()
{
	int m,n,t,i,j;
	for(i=0;i<=2000;i++)
		for(j=0;j<=2000;j++)
			dp[i][j]=0;
	for(i=1;i<=2000;i++)
	{
		for(j=1;j<=2000;j++)
		{
			if( i == 1 )
				dp[i][j]=j%1007;
			else if( i == j )
				dp[i][j]=1;
			else if( j > i )
				dp[i][j]=(dp[i-1][j-1]+dp[i][j-1])%1007;
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&m,&n);
		printf("%d\n",dp[m][n]);
	}
	return 0;
}