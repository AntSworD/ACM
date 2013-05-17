#include<stdio.h>
int main()
{
	int k,c,a,b,ka[9],kb[9],s;
	while(scanf("%d%d%d",&a,&b,&k)&&(a!=0||b!=0))
	{
		ka[0]=a;kb[0]=b;
		for(s=0;s<k;s++) 
		{
			ka[s+1]=ka[s]/10;
			ka[s]=ka[s]%10;
			kb[s+1]=kb[s]/10;
			kb[s]=kb[s]%10;
		}
		for(s=0;s<k;s++) if(ka[s]!=kb[s]) break;
		if(s==k) printf("-1\n");
		else printf("%d\n",a+b);
	}
	return 0;
}