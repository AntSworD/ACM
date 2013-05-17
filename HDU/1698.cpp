#include <cstdio>
#include <algorithm>

#define maxn 100001
#define TL now << 1
#define TR now << 1 | 1
#define TT now >> 1
#define TN Tree[now]

struct node{
	int l, r, sum;
	int col;
}Tree[maxn << 2];

void PushUp(int now)
{
	TN.sum = Tree[TL].sum + Tree[TR].sum;
}
void PushDown(int now)
{
	if(TN.col)
	{
		Tree[TL].col = Tree[TR].col = TN.col;
		Tree[TL].sum = (Tree[TL].r - Tree[TL].l + 1) * TN.col;
		Tree[TR].sum = (Tree[TR].r - Tree[TR].l + 1) * TN.col;
		TN.col = 0;
	}
}

void Build(int now, int l, int r)
{
	TN.l = l;
	TN.r = r;
	TN.col = 0;
	TN.sum = (l - r + 1);
	if(l == r) return ;
	int mid = (l + r) >> 1;
	Build(TL, l, mid);
	Build(TR, mid + 1, r);
}

void UpData(int now, int l, int r, int w)
{
	if(l <= TN.l && TN.r <= r)
	{
		TN.col = w;
		TN.sum = (TN.r - TN.l + 1) * w;
		return ;
	}
	PushDown(now);
	int mid = (TN.l + TN.r) >> 1;
	if(l <= mid) UpData(TL, l, r, w);
	if(r > mid) UpData(TR, l, r, w);
	PushUp(now);
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int tt = 1; tt <= t; ++ tt)
	{
		int n;
		scanf("%d", &n);
		Build(1, 1, n);
		int q, l, r, w;
		scanf("%d", &q);
		for(int i = 0; i < q; ++ i)
		{
			scanf("%d %d %d", &l, &r, &w);
			UpData(1, l, r, w);
		}
		printf("Case %d: The total value of the hook is %d.\n", tt, Tree[1].sum);
	}
	return 0;
}