#include <stdio.h>
int main()
{
	int a,i,n,s[4];
	long int b;
	while(scanf("%d%ld",&a,&b)!=EOF)
	{
		a=a%10;
		s[0]=a;
		n=a;
		for(i=1;i<4;i++)
		{
			a=a*n%10;
			s[i]=a;
		}
		n=(b-1)%4;
		printf("%d\n",s[n]);
	}
	return 0;
}


