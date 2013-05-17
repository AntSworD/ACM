#include<stdio.h>
int a[2005][2005],b[2005];
int main()
{
	int i,j;
	a[1][1]=1;
	b[1]=1;
	for(i=2;i<2005;i++)
		b[i]=0;
	for(i=2;i<2005;i++)
	{
		for(j=1;j<=i;j++)
		{
			a[i][j]=(a[i-1][j-1]+j*a[i-1][j])%1000;
			b[i]+=a[i][j];
		}
		b[i]=b[i]%1000;
	}
	scanf("%d",&i);
	while(i--)
	{
		scanf("%d",&j);
		printf("%d\n",b[j]);
	}
	return 0;
}