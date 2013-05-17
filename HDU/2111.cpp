#include<stdio.h>
int max(int x,int y)
{
	return x>y? x: y;
}
int main()
{
	int v,n,a[101],b[101],f[101];
	while(scanf("%d",&v)&&v!=0)
	{
		scanf("%d",&n);
		int i;
		for(i=1;i<=n;i++)
			scanf("%d %d",&a[i],&b[i]);
		int j;
		for(i=0;i<=v;i++)
			f[i]=0;
		for(i=1;i<=n;i++)
		{
			if(b[i]>v)
			{
				for(j=1;j<=v;j++)
					f[j]=max(f[j],f[j-1]+a[i]);
			}
			else
			{
				int h=1,no=b[i];
				while(h<no)
				{
					for(j=v;j>=h;j--)
						f[j]=max(f[j],f[j-h]+h*a[i]);
					no-=h;
					h*=2;
				}
				for(j=v;j>=no;j--)
					f[j]=max(f[j],f[j-no]+no*a[i]);
			}
		}
		printf("%d\n",f[v]);
	}
	return 0;
}