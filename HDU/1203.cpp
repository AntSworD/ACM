#include<stdio.h>
struct offer
{
	int cash;
	float val;
};

offer o[1001];
float min(float x,float y)
{
	return x>y? y : x ;
}

int m,n;

float packup()
{
	float f[10001];
	int i;
	for(i=0;i<=n;i++)
		f[i]=1;
	int j;
	for(i=1;i<=m;i++)
		for(j=n;j>=o[i].cash;j--)
			f[j]=min(f[j],f[j-o[i].cash]*(1-o[i].val));
	return f[n];
}

int main()
{
	while(scanf("%d %d",&n,&m)&&m+n!=0)
	{
		int i;
		for(i=1;i<=m;i++)
			scanf("%d %f",&o[i].cash,&o[i].val);
		float k=packup();
		printf("%.1f%%\n",(1-k)*100);
	}
	return 0;
}