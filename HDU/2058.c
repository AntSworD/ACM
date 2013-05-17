#include<stdio.h>
#include<math.h>
int main()
{
	int n,m,a,k;
	while(scanf("%d %d",&n,&m)&&(n!=0||m!=0))
	{
		for(a=(int)sqrt(2*m);a>0;a--)
		{
			k=-m/a+(1+a)/2;
			if(a*(a-2*k+1)==2*m)
				printf("[%d,%d]\n",-k+1,a-k);
		}
		printf("\n");
	}
	return 0;
}