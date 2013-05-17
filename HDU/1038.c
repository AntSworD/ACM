#include<stdio.h>
int main()
{
	double d,t;
	int r,i;
	i=1;
	while(scanf("%lf%d%lf",&d,&r,&t)&&r!=0)
	{
		double s,v;
		s=3.1415927*(d/(12*5280))*r;
		v=s/(t/3600);
		printf("Trip #%d: %.2lf %.2lf\n",i,s,v);
		i++;
	}
	return 0;
}