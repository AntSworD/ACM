#include<stdio.h>
#include<string.h>
char c1[10000];
void cl(char c[10000])
{
	int i,j=0,k=0,m=0;
	i=0;
	while(c[i]!='\0')
	{
		if(c[i]=='-') c1[j++]='-';
		if(c[i]!='0'&&c[i]!='-')
			k=1;
		if(k==1)
			c1[j++]=c[i];
		if(c[i]=='.') m=1;
		i++;
	}
	c1[j]='\0';
	if(m==1)
	{
		i=strlen(c1)-1;
		while(c1[i]=='0') i--;
		if(c1[i]=='.') c1[i]='\0';
	}
	c1[i+1]='\0';
}

int main()
{
	char a[10000],b[10000];
	while(scanf("%s",a)!=EOF)
	{
		getchar();
		cl(a);
		strcpy(a,c1);
		scanf("%s",b);
		getchar();
		cl(b);
		strcpy(b,c1);
		if(strcmp(a,b)==0) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}