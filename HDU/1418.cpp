#include<stdio.h>
int main()
{
	__int64 m,n;
	while(scanf("%I64d %I64d",&m,&n)&&m+n!=0)
		printf("%I64d\n",m+n-2);
	return 0;
}