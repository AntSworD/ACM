#include<stdio.h>
int main()
{
	int a,b,c,t,i,p;
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d%d%d",&a,&b,&c);
		if(a>b)
		{
			p=a;
			a=b;
			b=p;
		}
		if(a>c)
		{
			p=a;
			a=c;
			c=p;
		}
		if(b>c)
		{
			p=b;
			b=c;
			c=p;
		}
		if(c*c==a*a+b*b) 
			printf("Case %d: Right triangle\n",i+1);
		if(c*c<a*a+b*b) 
			printf("Case %d: Acute triangle\n",i+1);
		if(c*c>a*a+b*b) 
			printf("Case %d: Obtuse triangle\n",i+1);
	}
	return 0;
}