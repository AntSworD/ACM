#include<stdio.h>
#include<string.h>
int main()
{
	char ch[100],b[5]="<br>",c[5] ="<hr>";
	int k=0,flag=0,len=0;
	while(scanf("%s",ch)!=EOF)
	{
		if(strcmp(ch,b)==0)
		{
			printf("\n");
			k=0;flag=1;
		}
		else if(strcmp(ch,c)==0)
		{
			if(flag==0)
			{
				printf("\n--------------------------------------------------------------------------------\n");
				flag=1;k=0;len=0;
			}
			else
			{
				printf("--------------------------------------------------------------------------------\n");
				flag=1;k=0;len=0;
			}
		}
		else
		{
			if(k==1)
			{
				len=len+strlen(ch)+1;
				if(len>80)
				{
					printf("\n%s",ch);
					len=strlen(ch);
				}
				else
					printf(" %s",ch);
				k=1;
				flag=0;
			}
			else
			{
				printf("%s",ch);
				len=strlen(ch);
				k=1;
				flag=0;
			}
		}
	}
	printf("\n");
	return 0;
}