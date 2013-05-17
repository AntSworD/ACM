#include<stdio.h>
#include<string.h>
int main()
{
	int n,m;
	int b[3005],a[10005];
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int i,j,k;
		memset(b,0,sizeof(b));
		memset(a,0,sizeof(a));
		for(i=0;i<n;i++)
			scanf("%d",&b[i]);
		for(i=0;i<n;i++)
			for(j=i+1;j<n;j++)
				a[b[i]+b[j]]++;
		k=0;
		for(j=10001;j>=0&&k!=m;j--)
		{
			while(a[j]!=0)
			{
				printf("%d",j);
				k++;
				a[j]--;
				if(k!=m) printf(" ");
				if(k==m) break;
			}
		}
		printf("\n");
	}
	return 0;
}
