#include<stdio.h>
int n,m,a[101][101];

int max(int x,int y)
{
	return x>y? x : y;
}

int packup()
{
	int i,f[101];
	for(i=0;i<=m;i++)
		f[i]=0;
	int j,k;
	for(i=1;i<=n;i++)
		for(j=m;j>=0;j--)
			for(k=1;k<=m;k++)
				if(j>=k)
					f[j]=max(f[j],f[j-k]+a[i][k]);
	return f[m];
}

int main()
{
	while(scanf("%d %d",&n,&m)&&m+n!=0)
	{
		int i,j;
		for(i=1;i<=n;i++)
			for(j=1;j<=m;j++)
				scanf("%d",&a[i][j]);
		i=packup();
		printf("%d\n",i);
	}
	return 0;
}