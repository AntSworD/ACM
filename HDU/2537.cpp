#include<stdio.h>
int main()
{
	int r,y,n;
	char c[16];
	while(scanf("%d",&n)!=EOF)
	{
		getchar();
		int i;
		r=0;y=0;
		scanf("%s",c);
		for(i=0;i<n;i++)
		{
			if(c[i]=='R')
				r++;
			else if(c[i]=='Y')
				y++;
		}
		if(c[n-1]=='B')
		{
			if(r==7)
				printf("Red\n");
			else
				printf("Yellow\n");
		}
		else if(c[n-1]=='L')
		{
			if(y==7)
				printf("Yellow\n");
			else
				printf("Red\n");
		}
	}
	return 0;
}