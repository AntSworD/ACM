#include<stdio.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)&&n!=0)
	{
		int a[101],b[101],p,t,j,as,bs;
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		for(i=0;i<n;i++) scanf("%d",&b[i]);
		for(i=0;i<n-1;i++)
		{
			p=i;
			for(t=i+1;t<n;t++) if(a[t]<a[p]) p=t;
			j=a[i];a[i]=a[p];a[p]=j;
		}
		for(i=0;i<n-1;i++)
		{
			p=i;
			for(t=i+1;t<n;t++) if(b[t]<b[p]) p=t;
			j=b[i];b[i]=b[p];b[p]=j;
		}
		as=0;bs=0;
		for(i=0;i<n;i++) 
		{
			if(a[i]>b[i]) as+=2;
			else if(a[i]<b[i]) bs+=2;
			else  
			{
				as+=1;
				bs+=1;
				
			}
		}
		printf("%d vs %d\n",as,bs);
	}
	return 0;
}