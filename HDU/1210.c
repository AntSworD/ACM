#include<stdio.h>
int main()
{
	int i,n,s;
	while(scanf("%d",&n)!=EOF)
	{
		i=1;
		for(s=1;;s++)
		{
			i=2*i%(2*n+1);
			if(i==1) 
			{
				printf("%d\n",s);
				break;
			}
			else if(i==2*n) 
			{
				printf("%d\n",2*s);
				break;
			}
		}
	}
	return 0;
}