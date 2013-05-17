#include<stdio.h>
int main()
{
	int n,u,d;
	while(scanf("%d %d %d",&n,&u,&d)&&n!=0)
	{
		int s,n0;
		n0=0;
		s=0;
		while(n0<n)
		{	
			s++;
			n0=n0+u;
			if(n0>=n) break;
			s++;
			n0=n0-d;
		}
		printf("%d\n",s);
	}
	return 0;
}