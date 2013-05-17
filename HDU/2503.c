#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a,b,c,d,e,f,j,t,q,p;
		scanf("%d %d %d %d",&a,&b,&c,&d);
		e=a*d+b*c;f=b*d;
		q=f;
		p=e;
		t=p%q;
		while(t!=0)
		{
			p=q;
			q=t;
			t=p%q;
		}
		printf("%d %d\n",e/q,f/q);
	}
	return 0;
}