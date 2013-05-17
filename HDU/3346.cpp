#include<stdio.h>
int main()
{
	int t,n;
	scanf("%d",&t);
	while(t--)
	{
		int a=0,b=0;
		scanf("%d",&n);
		if(n%8==0) printf("Lucky number!\n");
		else 
		{
			while(n)
			{
				a+=n%10;
				b+=(n%10)*(n%10);
				n/=10;
			}
			if(a%8==0||b%8==0)
				printf("Lucky number!\n");
			else printf("What a pity!\n");
		}
	}
	return 0;
}