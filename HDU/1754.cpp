#include <stdio.h>
#define maxn 200001

struct node{
	int l, r, data;
}tree[4 * maxn];

#define TL now << 1
#define TR now << 1 | 1
#define TT now >> 1
#define TN tree[now]

int n, m;

inline int max(int a, int b)
{
	return a > b ? a : b;
}

void PushUp(int now)
{
	TN.data = max(tree[TL].data, tree[TR].data);
	if(now == 1)
		return ;
	PushUp(TT);
}

void BuildTree(int now, int l, int r)
{
	TN.l = l;
	TN.r = r;
	TN.data = 0;
	if(TN.l == TN.r)
	{
		scanf("%d", &TN.data);
		PushUp(TT);
		return ;
	}
	int mid = (l + r) >> 1;
	BuildTree(TL, l, mid);
	BuildTree(TR, mid + 1, r);
}

int Query(int now, int l, int r)
{
	if(TN.l == l && TN.r == r)
		return TN.data;
	int mid = (TN.l + TN.r) >> 1;
	if(r <= mid)
		return Query(TL, l, r);
	else if(l > mid)
		return Query(TR, l, r);
	else
		return max(Query(TL, l, mid), Query(TR, mid + 1, r));
}

void Updata(int now, int pos, int k)
{
	if(TN.l == TN.r)
	{
		TN.data = k;
		PushUp(TT);
		return ;
	}
	int mid = (TN.l + TN.r) >> 1;
	if(pos > mid)
		Updata(TR, pos, k);
	else
		Updata(TL, pos, k);
}

int main()
{
	while(~scanf("%d %d", &n, &m))
	{
		BuildTree(1, 1, n);
		for(int i = 0; i < m; ++ i)
		{
			char c[2];
			scanf("%s", c);
			int a, b;
			scanf("%d %d", &a, &b);
			if(c[0] == 'Q')
				printf("%d\n",Query(1, a, b));
			else
				Updata(1, a, b);
		}
	}
	return 0;
}