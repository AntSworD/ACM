#include<stdio.h>
int f(int x)
{
	int i;
	i=0;
	while(x!=1)
	{
		if(x%2==0)
			x=x/2;
		else
			x=(3*x+1)/2;
		i++;
	}
	return i;
}

int main()
{
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		printf("%d\n",f(n));
	}
	return 0;
}