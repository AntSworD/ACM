#include<stdio.h>
__int64 a[2100002];
int main()
{
	__int64 t,i,n;
	a[0]=0;
	for(i=1;i<2100001;i++)
	{
		n = i - 1;
		a[i] = 2 * n * n * n + 3 * n * n + 3 * n + 1 - a[i - 1];
	}
	scanf("%I64d",&t);
	while(t--)
	{
		scanf("%I64d",&n);
		printf("%I64d %I64d\n",a[n],a[n+1]);
	}
	return 0;
}