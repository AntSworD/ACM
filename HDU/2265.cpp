#include<stdio.h>
#include<string.h>
int main()
{
	char a[201],b[201];
	int i,j,len;
	while(gets(a))
	{
		len=strlen(a);
		j=1;
		for(i=0;i<len;i++)
		{
			if(a[i]!=' ') 
			{
				b[j++]=a[i];
				if((j-1)%3==0) 
				{
					printf("%c",b[j-1]);
					b[j-1]=0;
				}
			}
		}
		b[j]='\0';
		for(i=1;i<j;i++)
		{
			if(i%2==0&&b[i]!=0)
			{
				printf("%c",b[i]);
				b[i]=0;
			}
		}
		for(i=1;i<j;i++)
			if(b[i]!=0)
				printf("%c",b[i]);
		printf("\n");
	}
	return 0;
}