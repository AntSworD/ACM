#include<stdio.h>
int main()
{
	__int64 n;
	int m,i,s;
	scanf("%d",&m);
	for(i=0;i<m;i++)
	{
		scanf("%I64d",&n);
		s=0;
		while(n!=0)
		{
			if(n%2==0) n=n-n/2;
			else
			{
				n-=1;
				s++;
			}
		}
		printf("%d\n",s);
	}
	return 0;
}
