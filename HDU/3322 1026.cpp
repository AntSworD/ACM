#include<stdio.h>
#include<string.h>
char a[50002][21],s[50001][21];
int  b[50001];
int main()
{
	long int n,m,i,j,max;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		scanf("%s %d",a[i],&b[i]);
	for(i=0;i<m;i++)
		scanf("%s",s[i]);
	for(i=-0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			if(strcmp(s[i],a[j])==0)
			{
				printf("%ld\n",b[j]);
				break;
			}
		}
		if(j==n) printf("sorry!\n");
	}
	return 0;
}