#include<stdio.h>
int main()
{
	int t,i;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		int n,j,k,p;
		long int a[1001];
		scanf("%d",&n);
		for(j=0;j<n;j++) scanf("%ld",&a[j]);
		for(j=0;j<n-1;j++)
		{	
			p=j;
			for(k=j+1;k<n;k++) if(a[k]<a[p]) p=k;
			k=a[j];a[j]=a[p];a[p]=k;
			printf("%ld ",a[j]);
		}
		printf("%ld\n",a[n-1]);
	}
	return 0;
}