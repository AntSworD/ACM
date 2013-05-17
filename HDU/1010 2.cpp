#include<stdio.h>
#include<string.h>
#include<math.h>
char a[9][9];
int n,m,t,xl,yl;
bool k,flag[9][9];
int bu[4][2]={0,-1,0,1,1,0,-1,0};

void dfs(int x,int y,int step)
{
	int i,temp,nextx,nexty;
	if(x==xl&&y==yl&&step==t)
	{
		k=true;
		return ;
	}
	temp =(t - step ) - abs( x- xl)-abs(y-yl);
	if(temp < 0 || temp % 2 == 1)
		return ;
	for(i = 0 ; i < 4 ; i ++)
	{
		nextx=x+bu[i][0];
		nexty=y+bu[i][1];
		if(flag[nextx][nexty] == false && nextx >= 0 && nextx < m && nexty >= 0 && nexty < n && k == false)
		{
			flag[nextx][nexty] = true;
			dfs(nextx,nexty,step + 1);
			flag[nextx][nexty] = false;
		}
	}
	return ;
}

int main()
{
	while(scanf("%d %d %d",&m,&n,&t)&&m+n+t!=0)
	{
		getchar();
		int i,j,sx,sy,s=0;
		for(i = 0 ; i < m ; i ++)
		{
			for(j = 0 ; j < n ; j ++)
			{
				a[i][j]=getchar();
				if(a[i][j]=='S')
				{
					sx=i;
					sy=j;
				}
				if(a[i][j]=='D')
				{
					xl=i;
					yl=j;
				}
				if(a[i][j]=='X')
				{
					s++;
					flag[i][j]=true;
				}
				else
					flag[i][j]=false;
			}
			getchar();
		}
		if(m * n - s < t )
		{
			printf("NO\n");
			continue;
		}
		k=false;
		flag[sx][sy]=true;
		dfs(sx,sy,0);
		if(k==true) printf("YES\n");
		else printf("NO\n");
	}
	return 0;
}