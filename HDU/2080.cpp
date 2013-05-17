#include<stdio.h>
#include<math.h>
#define pi acos(-1.0)
int main()
{
	double q,k1,k2,x1,x2,y1,y2;
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%lf %lf %lf %lf",&x1,&y1,&x2,&y2);
		k1=y1/x1;
		k2=y2/x2;
		q=fabs((k2-k1)/(1+k1*k2));
		q=atan(q)*180.0/pi;
		if(q==0&&x1*x2<0) q=180;
		else 
			if(x2*x1<=0&&y2*y1<=0) q=180-q;
			printf("%.2lf\n",q);
	}
	return 0;
}