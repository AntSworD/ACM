#include<stdio.h>
int main()
{
	int p[1000],i,a,b,j;
	while(scanf("%d",&a)!=EOF)
	{
		for(i=0;i<a;i++)
			p[i]=-1;
		i=0;
		while(a--)
		{
			scanf("%d",&b);
			for(j=0;j<=i+1;j++)
			{
				if(p[j]>=b) 
				{
					p[j]=b;
					break;
				}
			}
			if(j>i+1)
			{
				p[i]=b;
				i++;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}