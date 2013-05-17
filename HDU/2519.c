#include<stdio.h>
int main()
{
	int c[31][31];
	int i,j,t;
	for(i=0;i<31;i++)
		for(j=0;j<31;j++)
			c[i][j]=0;
	for(i=0;i<31;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(j==0) c[i][j]=1;
			else 
				c[i][j]=c[i-1][j]+c[i-1][j-1];
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		int a,b;
		scanf("%d %d",&a,&b);
		printf("%d\n",c[a][b]);
	}
	return 0;
}
