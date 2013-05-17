#include<stdio.h>
#include<string.h>
char a[10000];
int main()
{

	while(gets(a))
	{
		int i,len,s1=1,s2=1,t;
		len=strlen(a);
		for(i=0;i<len;i++)
		{
			if(a[i]>='A'&&a[i]<='Z')
			{
				a[i]+=s1;
				if(a[i]>'Z') a[i]-=26;
				t=s1;s1=s2;s2=(t+s1)%26;
			}
		}
		printf("%s\n",a);
	}
	return 0;
}