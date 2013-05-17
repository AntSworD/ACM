#include<stdio.h>
int main()
{
	int m,i;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		int n,s;
		scanf("%d",&n);
		s=(n*n)%10000;
		printf("%d\n",s);
	}
	return 0;
}