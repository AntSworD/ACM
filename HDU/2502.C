#include<stdio.h>
int main()
{
	int n,i;
	__int64 a[21];
	a[0]=1;
	a[1]=1;
	for(i=2;i<21;i++) a[i]=a[i-1]*i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m,j,k;
		__int64 s,b[21];
		b[0]=1;
		k=1;
		scanf("%d",&m);
		for(j=m-1;j>0;j--,k++) b[k]=b[k-1]*j;
		s=0;
		for(j=0;j<m;j++) s=s+(b[j]/a[j])*(j+1);
		printf("%I64d\n",s);
	}
	return 0;
}