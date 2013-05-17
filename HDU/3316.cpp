#include <stdio.h>

struct node{
	int x, y;
}queue[10000];

int dir[8][2] = {-1, -1, -1, 0, -1, 1, 0, -1, 0, 1, 1, -1, 1, 0, 1, 1};
int n, sx, sy;
char map[101][101];

int get_num(int i, int j)
{
	int cout = 0;
	for(int k = 0; k < 8; ++ k)
		if(map[dir[k][0] + i][dir[k][1] + j] == 'X' && dir[k][0] + i >= 0 && dir[k][0] + i < n && dir[k][1] + j >= 0 && dir[k][1] + j < n)
			cout ++;
	return cout;
}

void bfs()
{
	map[sx][sy] = get_num(sx, sy) + '0';
	if(map[sx][sy] != '0')
		return ;
	int head = 1;
	int total = 0;
	queue[total].x = sx;
	queue[total].y = sy;
	while(total < head)
	{
		for(int i = 0; i < 8; ++ i)
		{
			node temp = queue[total];
			temp.x += dir[i][0];
			temp.y += dir[i][1];
			if(temp.x < 0 || temp.x >= n || temp.y < 0 || temp.y >= n || (map[temp.x][temp.y] >= '0' && map[temp.x][temp.y] <= '9'))
				continue ;
			map[temp.x][temp.y] = '0' + get_num(temp.x, temp.y);
			if(map[temp.x][temp.y] == '0')
				queue[head ++] = temp;
		}
		total ++;
	}
}

int main()
{
	int t = 0;
	while(~scanf("%d", &n))
	{
		for(int i = 0; i < n; ++ i)
			scanf("%s", map[i]);
		scanf("%d %d", &sx, &sy);
		if(map[sx][sy] == 'X')
		{
			printf("it is a beiju!\n");
		printf("\n");
			continue ;
		}
		bfs();
		for(int i = 0; i < n; ++ i)
		{
			for(int j = 0; j < n; ++ j)
			{
				if(map[i][j] == 'O' || map[i][j] == 'X')
					printf(".");
				else
					printf("%c", map[i][j]);
			}
			printf("\n");
		}
		printf("\n");
	}
	return 0;
}