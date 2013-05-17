#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++) 
	{
		int m,a,b,c,s=0;
		scanf("%d",&m);
		a=m/2;
		m=m-m/2;
		b=m*2/3;
		c=m-b;
		s=s+a/10;
		if(a%10!=0) s++;
		s=s+b/10;
		if(b%10!=0) s++;
		s=s+c/10;
		if(c%10!=0) s++;
		printf("%d\n",s);
	}
	return 0;
}