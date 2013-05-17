#include<stdio.h>
#include<math.h>
#define g 9.8
int main()
{
    double h,l,v;
    while(scanf("%lf %lf %lf",&h,&l,&v) && (h+l+v))
    {
        double a = atan( v*v/(g*l) );
        printf("%.2lf\n",tan(a)*l - g*l*l/(2*v*v*cos(a)*cos(a)) +h );
    }
    return 0;
}
