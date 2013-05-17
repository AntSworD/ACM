#include<stdio.h>
int main()
{
	long a,b,c,d,i,n[100];
	int m;
	while(scanf("%d",&m)&&m!=0)
	{
		scanf("%ld %ld",&a,&b);
		c=0;
		i=0;
		a=a+b;
		do{
			n[i]=a%m;
			i++;
			a=a/m;
		}while(a);
		i--;
		for(;i>=0;i--)
			printf("%d",n[i]);
		printf("\n");
	}
	return 0;
}