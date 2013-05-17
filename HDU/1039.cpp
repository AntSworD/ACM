#include<stdio.h>
#include<string.h>
int main()
{
	char password[25];
	while(scanf("%s",password)&&strcmp(password,"end")!=0)
	{
		bool flag=true;
		int len=strlen(password);
		int i;
		if(flag==true)
		{
			flag=false;
			for(i=0;i<len;i++)
				if(password[i]=='a'||password[i]=='e'||password[i]=='i'||password[i]=='o'||password[i]=='u')
				{
					flag=true;
					break;
				}
		}
		if(flag==true)
		{
			for(i=0;i<len-2;i++)
				if((password[i]=='a'||password[i]=='e'||password[i]=='i'||password[i]=='o'||password[i]=='u')&&(password[i+1]=='a'||password[i+1]=='e'||password[i+1]=='i'||password[i+1]=='o'||password[i+1]=='u')&&(password[i+2]=='a'||password[i+2]=='e'||password[i+2]=='i'||password[i+2]=='o'||password[i+2]=='u')
					||(password[i]!='a'&&password[i]!='e'&&password[i]!='i'&&password[i]!='o'&&password[i]!='u')&&(password[i+1]!='a'&&password[i+1]!='e'&&password[i+1]!='i'&&password[i+1]!='o'&&password[i+1]!='u')&&(password[i+2]!='a'&&password[i+2]!='e'&&password[i+2]!='i'&&password[i+2]!='o'&&password[i+2]!='u'))
				{
					flag=false;
					break;
				}
		}
		if(flag==true)
		{
			for(i=0;i<len-1;i++)
				if(password[i]==password[i+1]&&password[i]!='e'&&password[i]!='o')
				{
					flag=false;
					break;
				}
		}
		if(flag==true)
			printf("<%s> is acceptable.\n",password);
		else
			printf("<%s> is not acceptable.\n",password);
	}
	return 0;
}