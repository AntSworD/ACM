//author:zhengjj.asd@gmail.com
//data:12,8,20

#include <stdio.h>
#include <string.h>

struct node{
	char map[3][3];
	int x, y;
	void S(char *str)
	{
		int tx = 0, ty = 0;
		for(int i = 0; str[i]; ++ i)
		{
			if((str[i] < '9' && str[i] > '0') || str[i] == 'x')
			{
				map[tx][ty] = str[i];
				if(str[i] == 'x')
				{
					map[tx][ty] = '9';
					x = tx;
					y = ty;
				}
				ty ++;
				if(ty == 3)
				{
					tx ++;
					ty = 0;
				}
			}
		}
	}
}queue[363000];

char path[363000];
bool vis[363000];
int pre[363000];

int fact[]={1, 1, 2, 6, 24, 120, 720, 5040, 40320, 362880};
int dir[4][2] = {0, 1, 0, -1, 1, 0, -1, 0};
char dirc[]="lrud";  //因为是逆向广搜，所以标记要相反

#define swap(a, b) {a ^= b ^= a ^= b;}

int get_hash(node t)
{   //求hash值
	char s[10];
	int hash = 0;
	
	for(int i = 0; i < 3; ++ i)
	{
		for(int j = 0; j < 3; ++ j)
		{
			int cout = 0;
			s[i * 3 + j] = t.map[i][j];
			for(int k = i * 3 + j - 1; k >= 0; --k)
				if(s[k] > s[i * 3 + j])
					cout ++;
			hash += cout * fact[i * 3 + j];
		}
	}
	return hash;
}

void bfs()
{
	memset(path, -1, sizeof(path));
	memset(vis, false, sizeof(vis));
	int head = 1, total = 0;
	vis[0] = true;
	while(total < head)
	{
		int hash = get_hash(queue[total]);
		for(int i = 0; i < 4; ++ i)
		{
			node tmp = queue[total];
			int x = tmp.x + dir[i][0];
			int y = tmp.y + dir[i][1];
			if(x < 0 || y < 0 || x >= 3 || y >= 3)
				continue;
			swap(tmp.map[tmp.x][tmp.y], tmp.map[x][y]);
			tmp.x = x;
			tmp.y = y;
			int hast = get_hash(tmp);
			if(vis[hast])
				continue ;
			vis[hast] = true;   //把从最终状态逆向可达的点全部标记，判断有无解O（1）
			pre[hast] = hash;   //用hash值作为下标记录逆向前个状态，也就是正向的后个状态
			path[hast] = dirc[i];
			queue[head ++] = tmp;
 		}
		total ++;
	}
}

void out(int hash)
{
	if(hash <= 0)
		return ;
	printf("%c", path[hash]);
	out(pre[hash]);
}

int main()
{
	char s[] = "12345678x";
	node t;
	t.S(s);
	queue[0] = t;
	bfs();   //单广打表，从最终状态逆向广搜
	         //使用逆序数hash，不明白为什么是唯一的，哪天去查下，哪个朋友知道的给个链接，回复

	char in[100];
	while(gets(in))
	{
		node tmp;
		tmp.S(in);
		int hash = get_hash(tmp);
		if(!vis[hash])
		{
			printf("unsolvable\n");
			continue;
		}
		if(hash == 0)
		{
			printf("\n");
			continue;
		}
		out(hash);
		printf("\n");
	}
	return 0;
}