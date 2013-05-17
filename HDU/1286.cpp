#include<stdio.h>
int gcd( int x ,int y)
{  
	if(y==0) 
		return x;  
	return gcd(y, x%y);
}
int main()
{
	int t,n,i;
	scanf("%d",&t);
	while(t--)
	{
		int sum=0;
		scanf("%d",&n);
		for(i=1;i<n;i++)
			if(gcd(n,i)==1) sum++;
		printf("%d\n",sum);
	}
	return 0;
}