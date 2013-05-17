#include<stdio.h>
#include<math.h>
#include<string.h>
int bu[2][4]={{-1,1,0,0},{0,0,-1,1}};
int n,m,k,lx,ly;
char a[8][8];
bool t=false,flag[8][8];

void dfs(int x,int y,int step)
{
	int i,nextx,nexty,temp;
	if(x>=0&&y<n&&y>=0&&y<m&&flag[x][y]==false&&a[x][y]=='.'&&t==false)
	{
		if(x==lx&&y==ly&&step==k)
		{
			t=true;
			return ;
		}
		temp = (k-step) - abs(x-lx) - abs(y-ly);
		if( temp<0 || temp&1 ) return; 
		for(i=0;i<4;i++)
		{
			nextx=x+bu[0][i];
			nexty=y+bu[1][i];
			dfs(nextx,nexty,step+1);
			flag[nextx][nexty]=false;
		}
	}
}

int main()
{
	while(scanf("%d %d %d",&m,&n,&k)&&m+n+k!=0)
	{
		getchar();
		int i,j,sx,sy,s=0;
		t=false;
		for(i=0;i<m;i++)
		{
			for(j=0;j<n;j++)
			{
				a[i][j]=getchar();
				if(a[i][j]=='S')
				{
					sx=i;
					sy=j;
				}
				if(a[i][j]=='D')
				{
					lx=i;
					ly=j;
				}
				if(a[i][j]=='X')
					s++;
			}
			getchar();
		}
		if(m*n-s < k) 
		{
			printf("NO\n");
			continue;
		}
		memset(flag,false,sizeof(flag));
		flag[sx][sy]=true;
		dfs(sx,sy,0);
		if(t == true)
			printf("YES\n");
		else
			printf("NO\n");
	}
	return 0;
}
