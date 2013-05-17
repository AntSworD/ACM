#include<stdio.h>
#include<string.h>
int main()
{
	char c[10000];
	while(scanf("%s",c)&&c[0]!='0')
	{
		int i,l,s=0,p;
		l=strlen(c);
		if(l==1) s=c[0]-'0';
		else
		{
			for(i=0;i<l;i++)
			{
				s+=(c[i]-'0');
				p=s;
				if(p>=10) 
				{
					s=0;
					while(p)
					{
						s+=p%10;
						p/=10;
					}
				}
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
