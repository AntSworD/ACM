#include<stdio.h>
int main()
{
    int t;
    __int64 s[61];
    s[0]=1;    
    for(int i=1;i<61;i++)
        s[i]=2*s[i-1];
    scanf("%d",&t);
    while(t--)
	{
       int n,k;
       scanf("%d%d",&n,&k);
       printf("%I64d\n",s[n-k]);
    }
	return 0;
}