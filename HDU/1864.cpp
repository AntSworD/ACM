#include<stdio.h>
double max(double x,double y)
{
	return x > y? x : y ;
}
int main()
{
	double q,f[31],a[31];
	int n;
	while(scanf("%lf %d",&q,&n)&&n!=0)
	{
		int k,i,j=0;
		char c;
		for(i=0;i<n;i++)
		{
			double x,ta=0,tb=0,tc=0,sum=0;
			scanf("%d",&k);
			while(k--)
			{
				getchar();
				scanf("%c:%lf",&c,&x);
				if(c=='A')
					ta+=x;
				else if(c=='B')
					tb+=x;
				else if(c=='C')
					tc+=x;
				else
					continue;
			}
			sum=ta+tc+tb;
			if(sum>1000||ta>600||tb>600||tc>600||sum>q||(c!='A'&&c!='B'&&c!='C'))
				continue;
			a[++j]=sum;
		}
		for(i=0;i<=j;i++)
			f[i]=0;
		for(i=1;i<=j;i++)
			for(k=1;k<=i;k++)
				if(f[k]+a[i]<=q)
					f[k]=f[k]+a[i];
		double ma=0;
		for(i=0;i<=j;i++)
			if(ma<f[i])
				ma=f[i];
		printf("%.2lf\n",ma);
	}
	return 0;
}