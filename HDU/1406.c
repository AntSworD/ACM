#include<stdio.h>
int main()
{
	int t,k,a,b;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		int i,j,s,n;
		scanf("%d %d",&a,&b);
		if(a>b) 
		{
			s=a;a=b;b=s;
		}
		if(a<2) a=2;
		n=0;
		for(i=a;i<=b;i++)
		{
			s=0;
			for(j=1;j<=i/2;j++) 
			{
				if(i%j==0) s+=j;
				if(s>=i) break;
			}
			if(j==i/2&&s==i) n++;
		}
		printf("%d\n",n);
	}
	return 0;
}