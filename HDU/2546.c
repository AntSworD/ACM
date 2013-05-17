#include<stdio.h>
int main()
{
	long sum;
	int n,j,y;
	while(scanf("%d",&n)&&n!=0)
	{
		sum=0;
		while(n--)
		{
			scanf("%d",&j);
			sum+=j;
		}
		scanf("%d",&y);
		if(y>=5) printf("%ld\n",y-sum);
		else printf("%d\n",y);
	}
	return 0;
}