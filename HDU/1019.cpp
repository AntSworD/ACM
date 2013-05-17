#include<stdio.h>
__int64 gcd(__int64 a,__int64 b)
{   
	if(a==0) return b;
    else return b==0 ? a:gcd(b,a%b);
}

int main()
{
	__int64 t,a,b,s;
	scanf("%I64d",&t);
	while(t--)
	{
		__int64 n,i,j;
		scanf("%I64d",&n);
		if(n==1)
		{
			scanf("%I64d",&a);
			printf("%d\n",a);
		}
		else 
		{
			scanf("%I64d%I64d",&a,&b);
			s=a*b/gcd(a,b);
			for(i=0;i<n-2;i++)
			{
				scanf("%I64d",&a);
				s=s*a/gcd(s,a);
			}
			printf("%I64d\n",s);
		}
	}
	return 0;
}