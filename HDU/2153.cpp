#include<stdio.h>
#include<string.h>
int main()
{
	int n,a[10][10];
	while(scanf("%d",&n)!=EOF)
	{
		int k=1,i;
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
			a[0][i]=k++;
		for(i=1;i<n;i++)
			a[i][n-1]=k++;
		for(i=n-2;i>=0;i--)
			a[n-1][i]=k++;
		for(i=n-2;i>=1;i--)
			a[i][0]=k++;
		for(i=0;i<n;i++)
			for(k=0;k<n;k++)
			{
				if(a[i][k]==0)
					printf("   ");
				else
					printf("%3d",a[i][k]);
				if(k==n-1) printf("\n");
			}				  
	}
	return 0;
}