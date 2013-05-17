#include<stdio.h>
#include<stdlib.h>
long a[1000001];
int cmp(void const*a,void const*b)
{
	return*((int*)b)-*((int*)a);
}
int main()
{
	long m,n,i;
	while(scanf("%ld",&n)!=EOF)
	{
		scanf("%ld",&m);
		for(i=0;i<n;i++) scanf("%ld",&a[i]);
		qsort(a,n,sizeof(int),cmp);
		if(m>1) for(i=0;i<m-1;i++) printf("%d ",a[i]);
		printf("%d\n",a[m-1]);
	}
	return 0;
}