#include <stdio.h>
#include <string.h>

#define LSon now<<1
#define RSon now<<1|1
#define TL tree[now].left
#define TR tree[now].right
#define TM tree[now].mid()
#define TA tree[now].add
#define N 50001

struct node{
	int left, right, add[56];
	int mid(){ return ((left + right) >> 1);}
}tree[3 * N];

int ele[N], cout[11][11];

void BuildTree(int now, int l, int r)
{
	tree[now].left = l;
	tree[now].right = r;
	memset(tree[now].add, 0, sizeof(tree[now].add));
	if(l == r) return;
	BuildTree(LSon, l, tree[now].mid());
	BuildTree(RSon, tree[now].mid() + 1, r);
}

void updateTree(int now, int l, int r, int k, int c, int lModk)
{
	if(l == TL && r == TR)
	{
		TA[cout[k][lModk]] += c;
		return ;
	}
	if(l <= TM && r >= TM + 1)
	{
		updateTree(LSon, l, TM, k, c, lModk);
		updateTree(RSon, TM + 1, r, k, c, lModk);
	}
	else if(l > TM)
		updateTree(RSon, l, r, k, c, lModk);
	else
		updateTree(LSon, l, r, k, c, lModk);
}

int queryTree(int now, int pos, int sum)
{
	if(pos <= TR && pos >= TL)
	{
		for(int k = 1; k < 11; ++ k)
			sum += TA[cout[k][pos % k]];
	}
	if(TL == TR)
		return sum;
	if(pos <= TM)
		return queryTree(LSon, pos, sum);
	else
		return queryTree(RSon, pos, sum);

}

int main()
{
	int n = 0;
	for(int i = 1; i < 11; ++ i) for(int j = 0; j < i; ++ j) cout[i][j] = n ++;
	while(~scanf("%d", &n))
	{
		BuildTree(1, 1, n);
		for(int i = 1; i <= n; ++ i)
			scanf("%d", &ele[i]);

		int q;
		scanf("%d", &q);
		while(q--)
		{
			int t;
			scanf("%d", &t);
			if(t == 1)
			{
				int a, b, k, c;
				scanf("%d %d %d %d", &a, &b, &k, &c);
				updateTree(1, a, b, k, c, a % k);
			}
			else
			{
				int a;
				scanf("%d", &a);
				int ans = queryTree(1, a, 0);
				printf("%d\n", ele[a] + ans);
			}
		}
	}
	return 0;
}