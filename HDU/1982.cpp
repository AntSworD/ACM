#include<stdio.h>
int main()
{
	char a[10001];
	int i,t;
	scanf("%d",&t);
	while(t--)
	{
		int sum=0;
		scanf("%s",a);
		i=0;
		while(a[i]!='\0')
		{
			if(a[i]=='#')
			{
				if(sum!=0)
					printf("%c",sum+'A'-1);
				printf(" ");
				sum=0;
			}
			else if(a[i]=='-')
			{
				if(sum!=0)
					printf("%c",sum+'A'-1);
				sum=0;
			}
			else
				sum=sum*10+a[i]-'0';
			i++;
		}
		if(sum!=0)
			printf("%c",sum+'A'-1);
		printf("\n");
	}
	return 0;
}
