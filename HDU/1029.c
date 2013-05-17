#include<stdio.h>
#include<string.h>
int main()
{
	int j,i,a[32768],n,m,k;
	while(scanf("%d",&n)!=EOF)
	{
		m=(n+1)/2;
		k=1;
		memset(a,0,sizeof(a));
		for(j=0;j<n;j++)
		{
			scanf("%d",&i);
			a[i]++;
			if(a[i]>=m&&k==1)
			{
				printf("%d\n",i);
				k=0;
			}
		}
	}
	return 0;
}