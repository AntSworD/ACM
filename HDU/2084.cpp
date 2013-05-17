#include<stdio.h>
#include<string.h>

int max(int x,int y)
{
	return x>y? x : y ;
}

int main() //从上往下
{
	int n,a[101][101],f[101],t;
	scanf("%d",&t);
	while(t--)
	{
		int max1 = 0;
		scanf("%d",&n);
		int i,j;
		for(i = 1 ; i <= n ; i++)
			for(j = 1 ; j <= i ; j++)
				scanf("%d",&a[i][j]);
		memset(f,0,sizeof(f));
		f[1] = a[1][1];
		for(i = 2 ; i <= n ; i++)
		{
			for(j = i ; j >= 1 ; j--)
			{
				f[j] = max(f[j] + a[i][j] , f[j-1] + a[i][j]);
				if(i == n)
					if(f[j] > max1) max1 = f[j];
			}
		}
		printf("%d\n",max1);
	}
	return 0;
}

/*#include<stdio.h>

int max(int x,int y)
{
	return x>y? x : y ;
}

int main()  //从下向上
{
	int n,a[101][101],f[101],t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		int i,j;
		for(i = 1 ; i <= n ; i++)
			for(j = 1 ; j <= i ; j++)
			{
				scanf("%d",&a[i][j]);
				if(i == n)
					f[j] = a[i][j];
			}
		for(i = n - 1 ; i >= 1 ; i--)
			for(j = 1 ; j <= i ; j++)
				f[j] = max(f[j] + a[i][j] , f[j+1] + a[i][j]);
		printf("%d\n",f[1]);
	}
	return 0;
}*/

