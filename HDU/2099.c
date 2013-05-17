#include<stdio.h>
int main()
{
	long p;
	int a,b,i,j;
	while(scanf("%d %d",&a,&b)&&(a!=0||b!=0))
	{
		j=0;
		for(i=0;i<100;i++)
		{
			p=a*100+i;
			if(p%b==0)	
			{
				if(j!=0) printf(" ");
				printf("%02d",i);
				j++;
			}
		}
		printf("\n");
	}
	return 0;
}