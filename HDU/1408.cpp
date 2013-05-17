#include<stdio.h>
int main()
{
	double v,d;
	int i,sum;
	while(scanf("%lf %lf",&v,&d)!=EOF)
	{
		sum=v/d;
		if( d * sum != v )
			sum++;
		for(i=1;;i++)
		{
			v=v-d*i;
			if(v>0)
				sum++;
			else
				break;
		}
		printf("%d\n",sum);
	}
	return 0;
}