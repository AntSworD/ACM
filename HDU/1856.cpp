#include<stdio.h>
int a[10000001],b[10000001],max;
int find(int x)
{
	int s=x;
	while( a[x] != x )
	{
		x = a[x];
		a[s]=find(x);
		x=a[s];
	}
	return x;
}
void push(int x,int y)
{
	x = find(x);
	y = find(y);
	if( x!=y )
	{
		b[x] += b[y];
		a[y] = x;
	}
	if(b[x] > max)
			max = b[x];
}
int main()
{
	int t;
	while(scanf("%d",&t)!=EOF)
	{
		max=0;
		if(t==0) max=1;
		int i;
		for(i=0;i<10000001;i++)
		{
			a[i]=i;
			b[i]=1;
		}
		while(t--)
		{
			int x,y;
			scanf("%d %d",&x,&y);
			push(x,y);
		}
		printf("%d\n",max);
	}
	return 0;
}