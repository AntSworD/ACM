#include<stdio.h>
int main()
{
	int n,a[1001];
	while(scanf("%d",&n)&&n!=0)
	{
		int i,s;
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		s=a[0]*6+5;
		for(i=1;i<n;i++)
		{
			if(a[i]-a[i-1]>=0) s=s+(a[i]-a[i-1])*6+5;
			else if(a[i]-a[i-1]<0) s=s+abs(a[i]-a[i-1])*4+5;
		}
		printf("%d\n",s);
	}
	return 0;
}