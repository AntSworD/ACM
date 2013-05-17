#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a[101],m,k,j,s;
		scanf("%d %d",&m,&k);
		for(j=1;j<=m;j++) scanf("%d",&a[j]);
		s=0;
		for(j=1;j<=m;j++) if(a[j]>a[k]) s++;
		printf("%d\n",s);
	}
	return 0;
}