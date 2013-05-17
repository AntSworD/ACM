#include<stdio.h>
#include<math.h>
int gcd(int a,int b)
{
	if(b==0)
		return a;
	return gcd(b,a%b);
}
int main()
{
	int l,wx,wy,rx,ry,gd;
	while(scanf("%d",&l)!=EOF)
	{
		if(l==0) return 0;
		scanf("%d %d %d %d",&wx,&wy,&rx,&ry);
		gd=gcd(abs(wx-rx),abs(wy-ry));
		if(abs(rx)>l || abs(ry)>l )
		{
			printf("Out Of Range\n");
		}
		else if((gd-1)!=0 ||(wx==rx && abs(ry-wy)!=1) || (wy==ry && abs(wx-rx)!=1) )
			printf("No\n");
		else
			printf("Yes\n");
	}
	return 0;
}