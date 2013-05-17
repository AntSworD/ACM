#include<stdio.h>
int main()
{
	int a,b[7],i=0;
	while(scanf("%d",&a)&&a!=0)
	{
		int j,s;
		s=0;
		i=0;
		while(a!=0)
		{
			b[i]=a%2;
			a=a/2;
			i++;
		}
		for(j=0;j<i;j++) if(b[j]!=0) break;
		for(;j>=0;j--) s=s*2+b[j];
		printf("%d\n",s);
	}
	return 0;
}