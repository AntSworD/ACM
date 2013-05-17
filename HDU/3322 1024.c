#include<stdio.h>
int main()
{
	int n,m,i,j,k,s,q;
	char a[11][11];
	q=0;
	scanf("%d %d",&n,&m);
	for(i=0;i<n;i++)
		for(j=0;j<m;j++)
			a[i][j]='1';
	for(i=0;i<n;i++)
		scanf("%s",a[i]);
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='0')
			{
				q++;
				a[i][j]='1';
				k=i;s=j;
				goto again;
again:while(a[k][s+1]=='0')
				{
					a[k][s+1]='1';
					while(a[k+1][s+1]=='0')
					{
						a[k+1][s+1]='1';
						k++;
					}
					s++;
				}
				k=i;
				while(a[k+1][j]=='0')
				{
					a[k+1][j]='1';
					k++;
				}
				if(a[k-1][s]=='0')
				{
					k-=1;
					a[k][s]='1';
					goto again;
				}
			}
		}
		printf("%d\n",q);
		return 0;
} 