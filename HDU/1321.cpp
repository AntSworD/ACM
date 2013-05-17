#include<stdio.h>
#include<string.h>
int main()
{
	char a[70];
	int t,i,len;
	scanf("%d",&t);
	getchar();
	while(t--)
	{
		gets(a);
		len=strlen(a);
		for(i=len-1;i>=0;i--)
			printf("%c",a[i]);
		printf("\n");
	}
	return 0;
}
