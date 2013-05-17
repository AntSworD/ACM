#include<stdio.h>
int a[20];
int main()
{
	int i,t;
	a[1]=1;
	for(i=2;i<21;i++)
		a[i]=3*a[i-1]+1; 
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&i);
		printf("%d\n",2*a[i-1]+2);
	}
	return 0;
}