#include<stdio.h>
int main()
{
	int a[20][20],t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int k=1,x=1,y=n/2+1;
		while(k!=n*n+1)
		{
			a[x][y]=k;
			if(k%n==0)
				x++;
			else
			{
				x--;
				y++;
			}
			if(x<=0)
				x=n;
			if(y>n)
				y=1;
			k++;
		}
		for(x=1;x<=n;x++)
		{
			for(y=1;y<=n;y++)
				printf("%4d",a[x][y]);
			printf("\n");
		}
	}
	return 0;
}