#include<stdio.h>
double x[4],y[4],t;
void sortx()
{
	int i,j;
	for(i=1;i<4;i++)
		for(j=0;j<3;j++)
		{
			if(x[j]>x[j+1])
			{
				t=x[j];
				x[j]=x[j+1];
				x[j+1]=t;
			}
		}
}
void sorty()
{
	int i,j;
	for(i=1;i<4;i++)
		for(j=0;j<3;j++)
		{
			if(y[j]>y[j+1])
			{
				t=y[j];
				y[j]=y[j+1];
				y[j+1]=t;
			}
		}
}

int main()
{
	double a,b,c,d,k,h,s;;
	while(scanf("%lf %lf %lf %lf",&a,&b,&c,&d)!=EOF)
	{
		if(a<c) 
		{
			x[0]=a;
			x[1]=c;
		}
		else 
		{
			x[0]=c;
			x[1]=a;
		}
		if(b<d) 
		{
			y[0]=b;
			y[1]=d;
		}
		else 
		{
			y[0]=d;
			y[1]=b;
		}
		scanf("%lf %lf %lf %lf",&a,&b,&c,&d);
		if(a<c) 
		{
			x[2]=a;
			x[3]=c;
		}
		else 
		{
			x[2]=c;
			x[3]=a;
		}
		if(b<d) 
		{
			y[2]=b;
			y[3]=d;
		}
		else 
		{
			y[2]=d;
			y[3]=b;
		}
		if(y[3]<=y[0]||y[2]>=y[1]||x[3]<=x[0]||x[2]>=x[1])
			printf("0.00\n");
		else
		{
			sortx();
			sorty();
			k=x[2]-x[1];
			h=y[2]-y[1];
			s=k*h;
			printf("%.2lf\n",s);
		}
	}
	return 0;
}