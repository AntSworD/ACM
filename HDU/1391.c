#include<stdio.h>
int main()
{
	int n,m,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&m,&n);
		if(m==0&&n==0) printf("0\n");
		else if((m==n&&m%2==0)||(n==m-2&&n%2==0)) printf("%d\n",m+n);
		else if(m==n&&m%2==1||(n==m-2&&n%2==1)) printf("%d\n",m+n-1);
		else if(m==n+2) printf("%d\n",m+n);
		else printf("No Number\n");
	}
	return 0;
}