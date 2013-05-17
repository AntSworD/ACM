#include<stdio.h>
#include<string.h>
int main()
{
	int a,l,n,t;
	char b[6],c;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%c%s %d",&a,&c,b,&n);
		l=strlen(b);
		if(n<=l) printf("%c\n",b[n-1]);
		else printf("0\n");
	}
	return 0;
}