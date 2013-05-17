#include<stdio.h>
int main()
{
	char c;
	int n=0;
	while(scanf("%c",&c)&&c!='@')
	{
		int i;
		if(n!=0)
		printf("\n");
		scanf("%d",&n);
		getchar();
		for(i=1;i<=n;i++)
		{
			int j=n-i;
			while(j--)
				printf(" ");
			printf("%c",c);
			if(i==1) printf("\n");
			else 
			{
				
				int j=2*i-3;
				while(j--)
				{	
					if(i==n) printf("%c",c);
					else printf(" ");
				}
				printf("%c\n",c);
			}
		}
	}
	return 0;
}