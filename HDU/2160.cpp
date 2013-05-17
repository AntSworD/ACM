#include<stdio.h>
int main()
{
	int a[21],i;
	a[0]=1;a[1]=1;
	for(i=2;i<21;i++)
		a[i]=a[i-1]+a[i-2];
	scanf("%d",&i);
	while(i--)
	{
		int t;
		scanf("%d",&t);
		printf("%d\n",a[t]);
	}
	return 0;
}