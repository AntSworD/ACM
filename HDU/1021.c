#include<stdio.h>
int main()
{
	__int64 n;
	while(scanf("%I64d",&n)!=EOF)
	{
		if(n%8==2||n%8==6) printf("yes\n");
		else printf("no\n");
	}
	return 0;
}