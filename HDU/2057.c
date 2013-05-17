#include<stdio.h>
int main()
{
	__int64 a,b,s;
	while(scanf("%I64X %I64X",&a,&b)!=EOF)
	{
		s=a+b;
		if(s>=0) printf("%I64X\n",s);
		else printf("-%I64X\n",-s);
	}
	return 0;
}