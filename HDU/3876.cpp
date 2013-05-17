#include<stdio.h>
#include<math.h>
int main()
{
    int t;
    double a,b,c,r,k,l;
    scanf("%d",&t);
    while(t--)	
    {
        scanf("%lf%lf%lf",&a,&b,&c);	
        if(b*b*1.0-a*c*4.0<0)	
            printf("NO\n");
        else if((b*b*1.0-a*c*4.0)==0.0)
            printf("%.2lf\n",-b/(2.0*a));
		else	
        {
			k=(-b-sqrt(b*b*1.0-a*c*4.0))/(2.0*a);
			l=(-b+sqrt(b*b*1.0-a*c*4.0))/(2.0*a);
            if(k<l)	
            {	
                r=k;	
                k=l;	
                l=r;	
            }
            printf("%.2lf %.2lf\n",l,k);
        }	
    }
    return 0;	
}
