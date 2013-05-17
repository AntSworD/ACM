#include<stdio.h>
#include<string.h>
struct coin
{
	int val,wei;
}a[501];

int min(int x,int y)
{
	return x > y ? y:x;
}

int w,n;

int packup()
{
	int f[100001],i;
	for(i=0;i<=w;i++)
		f[i]=99999999;
	int j;
	f[0]=0;
	for(i=1;i<=n;i++)
	{
		for(j=0;j<=w;j++)
		{
			if(j-a[i].wei>=0)
				f[j]=min(f[j],f[j-a[i].wei]+a[i].val);
		}
	}
	return f[w];
}

int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int w1,w2;
		scanf("%d %d",&w1,&w2);
		w=w2-w1;
		scanf("%d",&n);
		int i;
		for(i=1;i<=n;i++)
			scanf("%d %d",&a[i].val,&a[i].wei);
		i=packup();
		if(i==99999999)
			printf("This is impossible.\n");
		else
			printf("The minimum amount of money in the piggy-bank is %d.\n",i);
	}
	return 0;
}