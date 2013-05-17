
#include<stdio.h>
int main()
{
	int a[11],n;
	a[1]=1;a[2]=0;a[3]=0;a[4]=2;a[5]=10;a[6]=4;a[7]=40;a[8]=92;a[9]=352;a[10]=724;
	while(scanf("%d",&n)&&n!=0)
		printf("%d\n",a[n]);
	return 0;
}