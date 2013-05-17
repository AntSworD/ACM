#include<stdio.h>
#include<math.h>
int main()
{
	int r;
	double k1,k2;
	k1=sqrt(2.0/3);
	k2=sqrt(1.0/3);
	while(scanf("%d",&r)&&r!=0)
		printf("%.3lf %.3lf\n",k2*r,k1*r);
	return 0;
}