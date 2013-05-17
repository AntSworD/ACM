#include<stdio.h>
int main()
{ 
	int t,n,a[30],b[10],i,j,min,min2,T,T2;
	scanf("%d",&t);
	while(t--)
	{  
		scanf("%d",&n);
		for(i=0,j=0;i<n;i++,j++)
			scanf("%d%d",&a[i],&b[j]);
		for(i=0;i<n;i++)
		{
			min=a[i],min2=b[i];
			for(j=i+1;j<n;j++)
				if(a[j]<min)
				{
					min^=a[j]^=min^=a[j];
					min2^=b[j]^=min2^=b[j];
				}
			a[i]=min;b[i]=min2;
		}
		for(j=0;j<n;j++)
		{ 
			while(b[j]--)
			{
				int t;
				t=a[j]-2;
				printf(">+");while(t--) printf("-");
				printf("+>\n");
			}
			printf("\n");
		}
	}
	return 0;
	
}