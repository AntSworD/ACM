#include<stdio.h>
__int64 a(int x,int y)
{
	__int64 s=1;
	for(;y>0;y--)
	{
		s=s*x;
		x--;
	}
	return s;
} 

__int64 c(int x)
{
	__int64 s=1;
	for(;x>0;x--)	
		s=s*x;
	return s;
}

int main()
{	
	char k;
	int m,n,i,t;
	scanf("%d",&t);
		getchar();
	for(i=0;i<t;i++)
	{
		scanf("%c%d%d",&k,&m,&n);
		getchar();
		if(k=='A')
			printf("%I64d\n",a(m,n));
		if(k=='C')
			printf("%I64d\n",(c(m)/c(m-n))/c(n));
	}
	return 0;
}