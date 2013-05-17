#include<stdio.h>

int rp(__int64 a,__int64 b)
{
	__int64 temp;
	while(b!=0)
	{
		temp=b;
		b=a%b;
		a=temp;
	}
	if(a==1)
		return 1;
	else 
		return 0;
}

int main()
{
	__int64 a,b;
	while(scanf("%I64d %I64d",&a,&b)!=EOF)
	{
		if(rp(a,b)==1)
			printf("%10I64d%10I64d    Good Choice\n\n",a,b);
		else
			printf("%10I64d%10I64d    Bad Choice\n\n",a,b);
	}
	return 0;
}