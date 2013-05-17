#include<stdio.h>
__int64 a[500001];
int main()
{
	long t=1,k;
	for(k=2;k<500001;k++) a[k]=1;
	a[0]=0;
	a[1]=0;
	for(k=2;k<=250000;k++) for(t=k+k;t<=500000;t=t+k) a[t]=a[t]+k;
	scanf("%ld",&t);
	for(k=0;k<t;k++)
	{
		long n;
		scanf("%ld",&n);
		printf("%I64d\n",a[n]);
	}
	return 0;
}