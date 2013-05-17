#include<stdio.h>
int main()
{
	int s[1001],i,k,n,t;
	for(i=1;i<1001;i++)
		s[i]=1;
	for(i=2;i<1001;i++)
	{
		n=i;
		while(n<1001) 
		{
			s[n]++;
			n+=i;
		}
	}
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&k);
		for(i=1;i<1001;i++)
			if(s[i]==k)
				break;
		if(i<1001) printf("%d\n",i);
		else printf("-1\n");
	}
	return 0;
}