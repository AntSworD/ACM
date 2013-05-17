#include<stdio.h>
#include<string.h>
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		if(n==0)
			printf("1\n");
		else 
		{
			int s[10001],i,j,k=0,a;
			memset(s,0,sizeof(s));
			s[0]=1;
			for(i=1;i<=n;i++)
			{
				a=0;
				for(j=0;j<=k;j++)
				{
					s[j]=s[j]*i+a;
					a=s[j]/10000;
					s[j]=s[j]%10000;
				}
				if(a!=0)
					s[++k]+=a;
			}
			printf("%d",s[k]);
			for(i=k-1;i>=0;i--)
				printf("%04d",s[i]);
			printf("\n");
		}
	}
	return 0;
}	