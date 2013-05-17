#include<stdio.h>
int main()
{
	int a[50],n;
	while(scanf("%d",&n)&&n!=0)
	{
		int i,j,k;
		for(i=1;i<50;i++)
			a[i]=0;
		for(i=0;i<n*6;i++)
		{
			scanf("%d",&k);
			a[k]=1;
		}
		for(i=1;i<50;i++)
			if(a[i]==0)
				break;
		if(i==50) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}