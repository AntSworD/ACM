#include<stdio.h>
#include<math.h>
int main()
{
	int s,k,t=100,i;
	long n;
	while(t--)
	{
		s=0;
		scanf("%ld",&n);
		k=sqrt(n);
		for(i=-k;i<=k;i++)
			if((int)sqrt(n-i*i)==sqrt(n-i*i))
			{
				s++;printf("i%d\n",i);
				if(i*i!=n) s++;
			}
		printf("%d\n",s);
	}
	return 0;
}