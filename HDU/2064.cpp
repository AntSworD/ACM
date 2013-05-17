#include<stdio.h>
__int64 f(int n)
{
	__int64 res=1;
	while(n--)
		res*=3;
	res--;
	return res;
}
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
		printf("%I64d\n",f(n));
	return 0;
}