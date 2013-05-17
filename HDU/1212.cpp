#include<stdio.h>
int main()
{
	int b,i,r;
	char a[1001];
	while(scanf("%s %d",a,&b)!=EOF)
	{
		i=r=0;
		while(a[i]!='\0')
			r=(r*10+(a[i++]-'0'))%b;
		printf("%d\n",r);
	}
	return 0;
}