#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		__int64 m;
		int y,i;
		scanf("%I64d",&m);
		y=m%10;
		if(y==0||y==1||y==5||y==6) printf("%d\n",y);
		else
		{
			for(i=0;i<(m-1)%4;i++)
				y=(m%10)*y%10;
			printf("%d\n",y);
		}
	}
	return 0;
}