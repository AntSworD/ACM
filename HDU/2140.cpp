#include<stdio.h>
char c[10001];
int main()
{
	while(scanf("%s",c)!=EOF)
	{
		int i;
		for(i=0;i<10001&&c[i]!='\0';i++)
		{
			if(c[i]=='b') printf(" ");
			if(c[i]=='q') printf(",");
			if(c[i]=='t') printf("!");
			if(c[i]=='m') printf("l");
			if(c[i]=='i') printf("e");
			if(c[i]=='c') printf("a");
			if(c[i]=='a') printf("c");
			if(c[i]=='e') printf("i");
			if(c[i]=='l') printf("m");
			if(c[i]!='b'&&c[i]!='q'&&c[i]!='t'&&c[i]!='m'&&c[i]!='i'&&c[i]!='c'&&c[i]!='a'&&c[i]!='e'&&c[i]!='l') printf("%c",c[i]);
		}
		printf("\n");
	}
	return 0;
}