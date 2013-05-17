#include<stdio.h>
#include<math.h>
int main()
{
	int n,m;
	double p;
	while(scanf("%d %d",&n,&m)&&(n!=0||m!=0))
	{
		p=(n+sqrt(n*n-4*m))/2;
		if(n*n-4*m<0||(int)p!=p) 
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}