#include<stdio.h>
int main()
{
	int t,a[21];
	a[1]=3;
	a[2]=7;
	for(t=3;t<21;t++)
		a[t]=2*a[t-1]+a[t-2];
	scanf("%d",&t);
	while(t--)
	{
		int n;
		scanf("%d",&n);
		printf("%d\n",a[n]);
	}
	return 0;
}