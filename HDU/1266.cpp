#include<stdio.h>
#include<string.h>
int main()
{  
	char a[100];
	int n,i,l,t,p;
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		while(n--)
		{
			scanf("%s",a);
			if(a[0]=='0')
				printf("0\n");
			else 
			{
				l=strlen(a);
				t=0;
				if(a[0]=='-')
				{
					putchar('-');
					t=1;
				}
				for(i=l-1;i>=0;i--)
					if(a[i]!='0') 
					{
						p=i+1;
						break;
					}
					for(;i>=t;i--)
						putchar(a[i]);
					for(;p<l;p++) 
						putchar('0');
					putchar('\n');
			}
		}
	}
	return 0;
}
