#include <stdio.h>
const long K=1000001;
int f[1000001];
int pd(long x)
{
	int y=0;
	while (x)
	{
		if (x%10==4||x%100==62)
			return 1;
		x=x/10;
	}
	return 0;
}
int main()
{
	long n,m;
	long i;
	for (i=1;i<K;i++)
	{
		f[i]=1;
		if (pd(i))
			f[i]=0;
	}
	while(scanf("%ld %ld",&n,&m)&&(n!=0||m!=0))
	{
		int s=0;
		for (i=n;i<=m;i++)
			if (f[i])
				s++;
		printf("%ld\n",s);
	}
	return 0;
}

