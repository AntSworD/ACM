#include<stdio.h>
int main()
{
	int a,b,s;
	while(scanf("%d%d",&a,&b)!=EOF)
	{
		int i;
		printf("%d %d ",a,b);
		s=0;
		if(a>b) a^=b^=a^=b;
		for(i=a;i<=b;i++)
		{
			int c=0,t=i;
			while(t!=1)
			{
				c++;
				if(t%2==1) t=3*t+1;
				else t=t/2;
			}
			if(c>s) s=c;
		}
		printf("%d\n",s+1);
	}
	return 0;
}