#include<stdio.h>
int main()
{
	__int64 sum;
	char c[260];
	int i;
	while(gets(c)&&c[0]!='#')
	{
		i=0;sum=0;
		while(c[i]!='\0')
		{
			if(c[i]>='A'&&c[i]<='Z')
				sum=sum+(c[i]-'A'+1)*(i+1);
			i++;
		}
		printf("%I64d\n",sum);
	}
	return 0;
}