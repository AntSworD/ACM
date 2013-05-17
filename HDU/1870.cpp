#include<stdio.h>
int main()
{
	char a[1000];
	while(scanf("%s",a)!=EOF)
	{
		int i=0,s=0;
		while(a[i]!='B')
		{
			if(a[i]=='(')
				s++;
			if(a[i]==')')
				s--;
			i++;
		}
		printf("%d\n",s);
	}
	return 0;
}