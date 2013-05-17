#include <stdio.h>
int gcd(int n,int m)
{
	if (m==0) return n;
	else return gcd(m,n%m);
}
int main ()
{
	int n,m;
	while (scanf("%d %d",&n,&m)&&n+m!=-2)
	{
		if (gcd(n,m)==1)
			printf ("YES\n");
		else 
			printf ("POOR Haha\n");
	}
	return 0;
}