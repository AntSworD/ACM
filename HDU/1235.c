#include<stdio.h>
int main()
{
	int n,i;
	while(scanf("%d",&n)&&n!=0)
	{
		int a[1001],s,k;
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		scanf("%d",&k);
		s=0;
		for(i=0;i<n;i++) if(a[i]==k) s++;
		printf("%d\n",s);
	}
	return 0;
}