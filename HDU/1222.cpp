#include<stdio.h>
int main()
{
	int t,m,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d",&m,&n);
		while(m>n?(m%=n):(n%=m));
		if(m+n==1)
			printf("NO\n");
		else
			printf("YES\n");
	}
	return 0;
}
