#include<stdio.h>
int main()
{
	__int64 f[25];
	int i;
	f[1]=0;f[2]=1;
	for(i=3;i<25;i++)
		f[i]=(i-1)*(f[i-1]+f[i-2]);
	while(scanf("%d",&i)!=EOF)
		printf("%I64d\n",f[i]);
	return 0;
}