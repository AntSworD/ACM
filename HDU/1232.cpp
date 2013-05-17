#include<stdio.h>
int a[1001];

int find(int x)
{
	while(a[x]!=x)
		x=a[x];
	return x;
}

void push(int x, int y)
{
	x=find(x);
	y=find(y);
	a[y]=a[x];
}

int main()
{
	int m,n;
	while(scanf("%d",&m) && m != 0)
	{
		int i,q,p;
		scanf("%d",&n);
		for(i=1;i<=m;i++)
			a[i]=i;
		for(i=0;i<n;i++)
		{
			scanf("%d %d",&q,&p);
			push(q,p);
		}
		int s=0;
		for(i=1;i<=m;i++)
		{
			if(a[i]==i)
				s++;
		}
		printf("%d\n",s-1);
	}
	return 0;
}