#include<stdio.h>
int main()
{
	int n,i,a,b,c;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		scanf("%d %d %d",&a,&b,&c);
		if(a+b>c||a+c>b||b+c>a)
		{
			if(a*a+b*b==c*c||a*a+c*c==b*b||b*b+c*c==a*a) printf("good\n");
			else if(a==b||b==c||a==c) printf("perfect\n");
			else printf("just a triangle\n");
		}
	}
	return 0;
}