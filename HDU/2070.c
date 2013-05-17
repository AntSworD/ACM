#include<stdio.h>
int main()
{
	int n,i;
	__int64 f[51];
	f[0]=0;
	f[1]=1;
	for(i=2;i<51;i++)
	f[i]=f[i-1]+f[i-2];
	while(scanf("%d",&n)&&n!=-1)
		printf("%I64d\n",f[n]);
	return 0;
}