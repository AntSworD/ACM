#include<stdio.h>
int main()
{
	char key[26],c[81];
	while(gets(key)!=NULL)
	{
		int i=0;
		gets(c);
		i=0;
		int k;
		while(c[i]!='\0')
		{
			if(c[i]>='A'&&c[i]<='Z')
			{
				k=c[i]-'A';
				c[i]=key[k]-32;
			}
			else if(c[i]>='a'&&c[i]<='z')
			{
				k=c[i]-'a';
				c[i]=key[k];
			}
			i++;
		}
		printf("%s\n",c);
	}
	return 0;
}