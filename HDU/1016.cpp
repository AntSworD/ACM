#include<stdio.h>
#include<string.h>
int n,a[25];
bool pri[45],flag[25];
void creat()
{
	int i,j;
	pri[2] = true;
	for(i = 3 ; i < 45 ; i ++)
	{
		if( i % 2 == 0)
			pri[i] = false;
		else 
			pri[i] = true;
	}
	for( i = 3 ; i < 45 ; i += 2)
	{
		for(j = i + i ; j < 45 ; j += i)
			if(pri[j] == true)
				pri[j] = false;
	}
	pri[1] = false;
}

void abc()
{
	int i;
	for(i=0;i<n-1;i++)
		printf("%d ",a[i]);
	printf("%d\n",a[i]);
}

void dfs(int step)
{
	int i;
	if(step==n&&pri[a[0]+a[step-1]]==true)
		abc();
	for(i=1;i<=n;i++)
	{
		a[step]=i;
		if(flag[i]==false&&pri[a[step]+a[step-1]]==true)
		{
			flag[i]=true;
			dfs(step+1);
			flag[i]=false;
		}
	}
}

int main()
{
	int j=1;
	creat();
	while(scanf("%d",&n)!=EOF)
	{
		printf("Case %d:\n",j++);
		if(n==1||n%2==0)
		{
			memset(flag,false,sizeof(flag));
			a[0]=1;
			flag[1]=true;
			dfs(1);
		}
		printf("\n");
	}
	return 0;
}