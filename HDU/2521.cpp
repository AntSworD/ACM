#include<stdio.h>
int main()
{
	int s[5001],i,j,a,b,n;
	for(i=1;i<5001;i++)
		s[i]=1;
	for(i=2;i<5001;i++)
	{
		n=i;
		while(n<5001) 
		{
			s[n]++;
			n+=i;
		}
	}
	scanf("%d",&j);
	while(j--)
	{
		int max=0;
		scanf("%d %d",&a,&b);
		for(;a<=b;a++)
		{
			if(s[a]>max)
			{
				max=s[a];
				i=a;
			}
		}
		printf("%d\n",i);
	}
	return 0;
}