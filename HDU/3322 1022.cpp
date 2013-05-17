#include<stdio.h>
int main()
{
	__int64 n,m,k,i,j,s,s1;
	while(scanf("%I64d %I64d %I64d",&n,&m,&k)!=EOF)
	{
		s=m*n;
		j=s-1;
		if(k>s/2) k=s-k;
		for(i=1;i<k;i++)
		{
			s1=s*j;
			s=s1/(i+1);
			j--;
		}
		if(k==0) s=1;
		printf("%I64d\n",s);
	}
	return 0;
}