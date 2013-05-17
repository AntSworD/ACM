#include<stdio.h>
#include<string.h>
char grid[15][15];
int out,loop,x,y,start,step[15][15];
void walk()
{
	int xx=1,yy=start,k;
	step[xx][yy]=1;
	while(1)
	{
		k=step[xx][yy];
		if(grid[xx][yy]=='N')
			xx--;
		else if(grid[xx][yy]=='S')
			xx++;
		else if(grid[xx][yy]=='E')
			yy++;
		else if(grid[xx][yy]=='W')
			yy--;
		if(xx<=0||xx>x||yy<=0||yy>y)
		{
			out=k;
			break;
		}
		else if(step[xx][yy]!=0)
		{
			out=step[xx][yy]-1;
			loop=k-step[xx][yy]+1;
			break;
		}
		else
			step[xx][yy]=k+1;
	}
}
int main()
{
	while(scanf("%d %d %d",&x,&y,&start)&&x+y+start!=0)
	{
		int i,j;
		loop=0;
		memset(step,0,sizeof(step));
		for(i=1;i<=x;i++)
		{
			getchar();
			for(j=1;j<=y;j++)
			{
				scanf("%c",&grid[i][j]);
			}
		}
		walk();
		if(loop==0)
			printf("%d step(s) to exit\n",out);
		else 
			printf("%d step(s) before a loop of %d step(s)\n",out,loop);
	}
	return 0;
}