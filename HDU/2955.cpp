#include<stdio.h>
int n,sum;
double po;

double max(double x,double y)
{
	return x >y? x: y;
}

struct point
{
	int mo;
	double p;
}a[101];

int packup()
{
	double f[100000];
	int i;
	for(i=1;i<=sum;i++)
		f[i]=0;
	f[0]=1;
	int j;
	for(i=1;i<=n;i++)
		for(j=sum;j>=a[i].mo;j--)
			f[j]=max(f[j],f[j-a[i].mo]*(1-a[i].p));
	for(j=sum;j>=0;j--)
		if(f[j]>=po)
			return j;
}

int main()
{
	int t,i;
	scanf("%d",&t);
	while(t--)
	{
		sum=0;
		scanf("%lf %d",&po,&n);
		po=1-po;
		for(i=1;i<=n;i++)
		{
			scanf("%d %lf",&a[i].mo,&a[i].p);
			sum+=a[i].mo;
		}
		i=packup();
		printf("%d\n",i);
	}
	return 0;
}
