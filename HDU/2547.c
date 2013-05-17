#include<stdio.h>
#include<math.h>
int main()
{
	double s,x,y,a,b,c,d;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		x=a-c;
		y=b-d;
		s=sqrt(x*x+y*y);
		printf("%.1lf\n",s);
	}
	return 0;
}