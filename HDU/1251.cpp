#include<stdio.h>
#include<string.h>
int f(char s[],char a[])
{
	int i,len;
	char g[11];
	strcpy(g,s);
	len=strlen(a);
	g[len]='\0';
	if(strcmp(g,a)==0) return 1;
	else return 0;
}

int main()
{
	int i=0,s,p;
	char a[11],b[10001][11],c[11];
	do
	{
		gets(a);
		if(a[0]!='\0')
		{
			strcpy(b[i],a);
			i++;
		}
	}while(a[0]!='\0');
	while (scanf("%s",c)!=EOF)
	{
		s=0;
		for (p=0;p<i;p++)
		{
			if(strcmp(b[p],c)==0)
				s++;
			else
				if (f(b[p],c))
					s++;
		}
		printf("%d\n",s);
	}
	return 0;
}
