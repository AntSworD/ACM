#include<stdio.h>
#include<string.h>
int main()
{
	char s[100];
	while(gets(s))
	{
		if(strcmp(s,"#")==0)
			break;
		int i=0;
		while(s[i]!='\0')
		{
			if(s[i]==' ')
				printf("%%20");
			else if(s[i]=='!')
				printf("%%21");
			else if(s[i]=='$')
				printf("%%24");
			else if(s[i]=='%')
				printf("%%25");
			else if(s[i]=='(')
				printf("%%28");
			else if(s[i]==')')
				printf("%%29");
			else if(s[i]=='*')
				printf("%%2a");
			else
				printf("%c",s[i]);
			i++;
		}
		printf("\n");
	}
	return 0;
}