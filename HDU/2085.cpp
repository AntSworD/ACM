#include<stdio.h>
struct app
{
	__int64 g;
	__int64 d;
};
int main()
{
	app a[34];
	int t,i;
	a[0].g=1;a[0].d=0;
	for(i=1;i<34;i++)
	{
		a[i].g=a[i].d=0;
		a[i].g+=3*a[i-1].g+2*a[i-1].d;
		a[i].d+=a[i-1].g+a[i-1].d;
	}
	while(scanf("%d",&t)&&t!=-1)
		printf("%I64d, %I64d\n",a[t].g,a[t].d);
	return 0;
}