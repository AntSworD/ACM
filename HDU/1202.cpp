#include<stdio.h>
void main()
{
	int n;
	while(scanf("%d",&n) != EOF)
	{   
		double s,p,s1 = 0,s3 = 0;
		int i,s2 = 0,p1;
		for(i = 0 ; i < n ; i++)
		{  
			scanf("%lf%lf",&s,&p);
			if(p >= 90) p1 = 4;
			else if(p >= 80) p1 = 3;
			else if(p >= 70) p1 = 2;
			else if(p >= 60) p1 = 1;
			else if(p >= 0) p1 = 0;
			else
			{
				s2++;
				continue;
			}
			s3 += s;
			s1 += s * p1;
		}
		if(s2 == n || s1 == 0)
			printf("-1\n");
		else
			printf("%.2lf\n",s1/s3);
	}
}