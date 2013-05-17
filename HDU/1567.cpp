#include<stdio.h>
int main()
{
	int f[2008],n;
	while(scanf("%d",&n)!=EOF)
	{
		int a,b,c,d,i,sum;
		for(i=1;i<=n;i++)
			f[i]=i;
		for(i=1;i<n;i++)
		{
			int j;
			for(j=0;j<n/2;j++)
			{
				scanf("%d-%d",&a,&b);
				f[a]+=b;
				f[b]+=a;
			}
		}
		sum=(n*n+n)/2;
		for(i=1;i<=n;i++)
			if(f[i]!=sum)
				break;
		if(i>n)
			printf("Yes\n");
		else
			printf("No\n");
	}
	return 0;
}