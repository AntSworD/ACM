#include<stdio.h>
int main()
{
	int temp;
	int m,n,t,k;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		int i;
		temp=2;
		for(i=0;i<k;i++)
		{
			scanf("%d %d",&n,&m);
			if(n==temp)
				temp=m;
			else if(m==temp)
				temp=n;
		}
		printf("%d\n",temp);
	}
	return 0;
}