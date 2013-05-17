#include<stdio.h>
int main()
{
	int i,t,n,a[11],k,p;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		int j;
		scanf("%d",&n);
		for(j=0;j<n;j++)
			scanf("%d",&a[j]);
		for(j=0;j<n-1;j++)
		{
			for(i=0;i<n-1-j;i++)
			{
				if(a[i]<a[i+1])
				{
					p=a[i];
					a[i]=a[i+1];
					a[i+1]=p;
				}
			}
		}
		printf("%d\n",a[n-2]);
	}
	return 0;
}
