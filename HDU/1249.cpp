#include<stdio.h>
__int64 f[10005];
int main()
{
	int i,t;
	f[1]=2;
	for(i=2;i<10001;i++)
		f[i]=f[i-1]+6*(i-1);
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&i);
		printf("%I64d\n",f[i]);
	}
	return 0;
}