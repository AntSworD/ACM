#include<stdio.h>
#include<math.h>
int main()
{
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		long int n,i;
		double s;
		scanf("%ld",&n);
		s=0;
		for(i=1;i<=n;i++) s=s+log10((double)i);
		printf("%d\n",(int)s+1);
	}
	return 0;
}