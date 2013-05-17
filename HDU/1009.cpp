#include<stdio.h>
#include<stdlib.h>
struct cat
{
	double j,f;
	double k;
};
cat a[10002];
int cmp(const void *a,const void *b)
{
	return (*(cat*)a).k<(*(cat*)b).k?1:-1;
}
int main()
{
	int i,j;
	double m,n;
	while(scanf("%lf%lf",&m,&n)&&n!=-1||m!=-1)
	{
		for(i=0;i<n;i++)
		{
			scanf("%lf%lf",&a[i].j,&a[i].f);
			a[i].k=(a[i].j*1.0)/a[i].f;
		}
		qsort(a,n,sizeof(a[0]),cmp);
		double sum=0;
		i=0;
		while(i<n)
		{
			if(m>=a[i].f)
			{
				sum+=a[i].j;
				m=m-a[i].f;
				i++;
			}
			else
			{
				sum+=m*1.0*a[i].k;
				break;
			}
		}
		printf("%.3lf\n",sum);	
	}
	return 0;
}

