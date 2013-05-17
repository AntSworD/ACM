#include<stdio.h>
int main()
{
	int i,t;
	__int64 a[40];
	a[1]=3;a[2]=9;
	for(i=3;i<40;i++)
		a[i]=(a[i-1]-a[i-2])*2+3*a[i-2];
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&i);
		printf("%I64d\n",a[i]);
	}
	return 0;
}