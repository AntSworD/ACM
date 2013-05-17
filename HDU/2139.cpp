#include<stdio.h>
int main()
{
	__int64 a[2347],i;
	a[1]=1;a[3]=10;
	for(i=5;i<2347;i+=2)
		a[i]=i*i+a[i-2];
	while(scanf("%I64d",&i)!=EOF)
		printf("%I64d\n",a[i]);
	return 0;
}