#include<stdio.h>
int main()
{
	int a[10],p,n;
	scanf("%d",&p);
	while(p--)
	{
		int i,j;
		scanf("%d",&n);
		for(i=0;i<10;i++)
			scanf("%d",&a[i]);
		for(i=0;i<9;i++)
			for(j=0;j<9-i;j++)
				if(a[j]<a[j+1])
					a[j]^=a[j+1]^=a[j]^=a[j+1];
		printf("%d %d\n",n,a[2]);
	}
	return 0;
}