#include <stdio.h>

#define maxn 50001
#define TL now<<1
#define TR (now<<1)+1
#define TT now>>1

struct {
	int l, r, sum;
}tree[4 * maxn];

int num[maxn], n;

void PushUp(int now)
{
	tree[now].sum = tree[TL].sum + tree[TR].sum;
	if(now == 1)
		return ;
	PushUp(TT);
}

void BuildTree(int now, int l, int r)
{
	tree[now].l = l;
	tree[now].r = r;
	tree[now].sum = 0;
	if(l == r)
	{
		tree[now].sum = num[l];
		PushUp(TT);
		return ;
	}
	int mid = (l + r) >> 1;
	BuildTree(TL, l, mid);
	BuildTree(TR, mid+1, r);
}

void Updata(int now, int pos, int k)
{
	if(tree[now].l == tree[now].r)
	{
		tree[now].sum += k;
		PushUp(TT);
		return ;
	}
	int mid = (tree[now].l + tree[now].r) >> 1;
	if(pos <= mid)
		Updata(TL, pos, k);
	else
		Updata(TR, pos, k);
}

int Query(int now, int l, int r)
{
	if(tree[now].l == l && tree[now].r == r)
		return tree[now].sum;
	int mid = (tree[now].l + tree[now].r) >> 1;
	if(l > mid)
		return Query(TR, l, r);
	else if(r <= mid)
		return Query(TL, l, r);
	else
		return Query(TL, l, mid) + Query(TR, mid + 1, r);
}

int main()
{
	int t;
	scanf("%d", &t);
	for(int tt = 1; tt <= t; ++ tt)
	{
		scanf("%d", &n);
		printf("Case %d:\n", tt);
		for(int i = 1; i <= n; ++ i)
			scanf("%d", &num[i]);
		BuildTree(1, 1, n);
		char c[10];
		while(1)
		{
			int a, b;
			scanf("%s", c);
			if(c[0] == 'E')
				break;
			else if(c[0] == 'A')
			{
				scanf("%d %d", &a, &b);
				Updata(1, a, b);
			}
			else if(c[0] == 'S')
			{
				scanf("%d %d", &a, &b);
				Updata(1, a, -b);
			}
			else
			{
				scanf("%d %d", &a, &b);
				printf("%d\n", Query(1, a, b));
			}
		}
	}
	return 0;
}