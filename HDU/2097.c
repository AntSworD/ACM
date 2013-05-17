#include<stdio.h>
int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		int t,s,s16,s12,n16,n12,x;
		s=0;
		n16=n;n12=n;x=n;
		do
		{
			t=n%10;
			s=s+t;
			n=n/10;
		}while(n!=0);
		s16=0;
		do
		{
			t=n16%16;
			s16=s16+t;
			n16=n16/16;
		}while(n16!=0);
		s12=0;
		do
		{
			t=n12%12;
			s12=s12+t;
			n12=n12/12;
		}while(n12!=0);
		if(s==s16&&s==s12&&s16==s12) printf("%d is a Sky Number.\n",x);
		else printf("%d is not a Sky Number.\n",x);
	}
	return 0;
}