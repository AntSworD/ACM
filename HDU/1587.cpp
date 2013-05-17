#include<stdio.h>

int n,a[1001],m;

int max(int x,int y)
{
	return x>y? x:y;
}

int packup()
{
	int f[1001],i,j;
	for(i=0;i<=m;i++)
		f[i]=0;
	for(i=1;i<=n;i++)
		for(j=a[i];j<=m;j++)
			f[j]=max(f[j],f[j-a[i]]+1);
	return f[m];
}

int main()
{
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int i;
		for(i=1;i<=n;i++)
			scanf("%d",&a[i]);
		i=packup();
		printf("%d\n",i);
	}
	return 0;
}