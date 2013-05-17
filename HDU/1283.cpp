#include<stdio.h>
int main()
{
	int m1,m2,r1,r2,r3;
	while(scanf("%d%d",&m1,&m2)!=EOF)
	{
		r1=r2=r3=0;
		char c[201];
		scanf("%s",c);
		int i;
		for(i=0;c[i]!='\0';i++)
		{
			if(c[i]=='A')
				r1=m1;
			else if(c[i]=='B')
				r2=m2;
			else if(c[i]=='C')
				m1=r3;
			else if(c[i]=='D')
				m2=r3;
			else if(c[i]=='E')
				r3=r1+r2;
			else if(c[i]=='F')
				r3=r1-r2;
		}
		printf("%d,%d\n",m1,m2);
	}
	return 0;
}