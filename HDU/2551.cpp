#include<stdio.h>
int main()
{
	__int64 a[500],n;
	int i;
	a[1]=1;
	for(i=2;i<500;i++)
		a[i]=a[i-1]+i*i*i;
	scanf("%I64d",&n);
	while(n--)
	{
		__int64 t;
		scanf("%I64d",&t);
		for(i=1;i<500;i++)
			if(a[i]>=t)
				break;
		printf("%d\n",i);	
	}
	return 0;
}