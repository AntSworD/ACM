#include<stdio.h>
int main()
{
	long int n,x,s=-1,b=0;
	while(scanf("%ld",&x)!=EOF)
	{
		int m=0;
		while(x!=0)
		{
			s=x%10;
			if(s%2==0) m=m+s;
			x=x/10;
		}
		if(b==1) printf("\n");
		b=1;
		printf("%d\n",m);
	}
	return 0;
}