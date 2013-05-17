#include<stdio.h>
int gcd(int a,int b)
{
	return (b==0?a:gcd(b,a%b));
}
int main()
{
    int a,b,n,c,t;
	scanf("%d",&n);
    while(n--)
    {
        while(scanf("%d%d",&a,&b)==2)
        {
            c=b*2;
            while(gcd(a,c)!=b)
                c+=b;
            printf("%d\n",c);
        }
    }
	return 0;
}
