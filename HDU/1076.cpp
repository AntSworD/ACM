#include<stdio.h>	
	
int main()
{
	int i,j;
	__int64 a[73];
	a[0]=1;a[2]=3;
	for(i=4;i<73;i+=2)
	{
		a[i]=3*a[i-2];
		j=i-4;
		while(j>=0)
		{
			a[i]+=2*a[j];
			j-=2;
		}
	}
	int n;
	while(scanf("%d",&n)&&n>=0)
	{
		if(n==0) printf("0\n");
		else if(n%2==1)
			printf("0\n");
		else if(n<=66)
			printf("%I64d\n",a[n]);
		else if(n==68)
			printf("22035086754287747403\n");
		else if(n==70)
			printf("82236063316189858921\n");
		else if(n==72)
			printf("270015678363052585049\n");
	}
	return 0;
}