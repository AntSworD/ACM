#include<stdio.h>
int main()
{
	int a,b,n;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int r,s;
		n=a*b;
		r=a%b;
		while(r!=0)
		{
			a=b;
			b=r;
			r=a%b;
		}
		printf("%d\n",n/b);
	}
	return 0;
}