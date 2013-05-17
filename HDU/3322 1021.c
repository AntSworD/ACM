#include<stdio.h>
int main()
{
	int m,n,i,j;
	char a[101][101];
	scanf("%d %d",&m,&n);
	getchar();
	for(i=0;i<m;i++)
		for(j=0;j<n;j++) a[i][j]='0';
	for(i=0;i<m;i++) 
		gets(a[i]);
	for(i=0;i<m;i++)
		for(j=0;j<n;j++)
		{
			if(a[i][j]=='*')
			{
				if(a[i-1][j-1]!='*'&&i-1>=0&&j-1>=0) a[i-1][j-1]+=1;
				if(a[i-1][j]!='*'&&i-1>=0) a[i-1][j]+=1;				
				if(a[i-1][j+1]!='*'&&i-1>=0&&j+1<n) a[i-1][j+1]+=1;
				if(a[i][j-1]!='*'&&j-1>=0) a[i][j-1]+=1;
				if(a[i][j+1]!='*'&&j+1<n) a[i][j+1]+=1;
				if(a[i+1][j-1]!='*'&&i+1<n&&j-1>=0) a[i+1][j-1]+=1;
				if(a[i+1][j]!='*'&&i+1<n) a[i+1][j]+=1;
				if(a[i+1][j+1]!='*'&&i+1<n&&j+1<n) a[i+1][j+1]+=1;
			}
		}
		for(i=0;i<m;i++)
			printf("%s\n",a[i]);
		return 0;
}