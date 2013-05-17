#include <cstdio>
#include <algorithm>
using namespace std;

#define maxn 200001
#define TL now << 1
#define TR now << 1 | 1
#define TN tree[now]
#define TT now >> 1

struct node{
	int l, r, maxw;
}tree[maxn << 2];

void PushUp(int now)
{
	TN.maxw = max(tree[TL].maxw, tree[TR].maxw);
}

void Build(int now, int l, int r, int w)
{
	TN.l = l;
	TN.r = r;
	TN.maxw = w;
	if(l == r)
		return ;
	int mid = (l + r) >> 1;
	Build(TL, l, mid, w);
	Build(TR, mid + 1, r, w);
}

int Query(int now, int w)
{
	if(TN.maxw < w)
		return -1;
	if(TN.l == TN.r)
	{
		TN.maxw -= w;
		return TN.l;
	}
	int maxl = tree[TL].maxw;
	int ret = 0;
	if(maxl >= w)
		ret = Query(TL, w);
	else
		ret = Query(TR, w);
	PushUp(now);
	return ret;
}

int main()
{
	int h, w, n;
	while(~scanf("%d %d %d", &h, &w, &n))
	{
		if(h > n)
			h = n;
		Build(1, 1, h, w);
		for(int i = 0; i < n; ++ i)
		{
			int tmp = 0;
			scanf("%d", &tmp);
			printf("%d\n", Query(1, tmp));
		}
	}
	return 0;
}