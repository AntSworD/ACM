#include<stdio.h>
int main()
{
	int a,b,i;
	__int64 n;
	while(scanf("%d %d %I64d",&a,&b,&n)&&(a!=0||b!=0||n!=0))
	{
		int f[50];
		f[1]=1;f[2]=1;
		if(n>2)
		{
			for(i=3;i<=50;i++)
			{
				f[i]=(a*f[i-1]+b*f[i-2])%7;
				if(f[i]==f[1]&&f[i-1]==1) break;
			}
			n=n%(i-2);
			if(n==0) 
				n=i-2;
		}
		printf("%d\n",f[n]);
	}
	return 0;
}