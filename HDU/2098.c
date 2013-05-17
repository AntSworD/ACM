#include<stdio.h>
int main()
{
	int n,m;
	m=0;
	while(scanf("%d",&n)!=EOF&&n!=0&&m<500)
	{
		int i,j,k,q,s;
		s=0;
		for(i=2;i<n;i++)
		{	
			for(j=2;j<sqrt(i);j++) if(i%j==0) break;
			if(j>=sqrt(i)) 
			{
				k=n-i;
				if(k!=1&&k!=i)
				{
					for(q=2;q<sqrt(k);q++) if(k%q==0) break;
					if(q==sqrt(k)) s++;
				}
			}
		}
		printf("%d\n",s/2);
		m++;
	}
	return 0;
}