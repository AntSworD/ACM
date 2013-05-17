#include<stdio.h>
int main()
{
	double x,sum;
	while(scanf("%lf",&x)&&x!=0)
	{
		int i=1;
		sum=0;
		for(;;i++)
		{
			sum+=1.0/(i+1);
			if(sum>=x)
			{
				printf("%d card(s)\n",i);
				break;
			}
		}
	}
	return 0;
}