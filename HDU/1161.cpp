#include<stdio.h>
#include<string.h>
int main()
{
	char a[10000];
	while(gets(a))
	{
		int i,len;
		len=strlen(a);
		for(i=0;i<len;i++)
			if(a[i]>='A'&&a[i]<='Z')
				a[i]+=32;
		printf("%s\n",a);
	}
	return 0;
}