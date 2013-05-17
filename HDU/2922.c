#include<stdio.h>
int group(int a,int b)
{
	int c[31][31];
	int i,j;
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
	return c[a][b];
}

int main()
{
	int a,b,sum;
	while(scanf("%d %d",&a,&b)&&a!=-1||b!=-1)
	{
		if(group(a+b,a)==a+b)
			printf("%d+%d=%d\n",a,b,a+b);
		else
			printf("%d+%d!=%d\n",a,b,a+b);
	}
	return 0;
}