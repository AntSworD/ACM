#include<stdio.h>
int a[1001];
int main()
{
	int n;
	while(scanf("%d",&n)!=EOF)
	{
		int i;
		for(i=0;i<n;i++) scanf("%d",&a[i]);
		for(i=0;i<n;i++)
			if(a[i]>=32) printf("%c",a[i]);
	}
	return 0;
}