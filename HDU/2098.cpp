#include<stdio.h>
#include<math.h>
int main()
{
	int n,i,j;
	bool prime[10005];
	
	for(i=3;i<10005; i++)
		if(i%2==0) 
			prime[i]=false;
		else 
			prime[i]=true;
	for(i=3; i<=sqrt(10005); i+=2)
	{   
		if(prime[i]==true)
		for(j=i+i;j<10005; j+=i)
			prime[j]=false;
	}
	while(scanf("%d",&n)&&n!=0)
	{
		int s=0;
		for(i=3;i<n/2;i+=2)
			if(prime[i]==true&&prime[n-i]==true)
				s++;
		printf("%d\n",s);
	}
	return 0;
}