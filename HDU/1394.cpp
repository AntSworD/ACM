#include <stdio.h>

#define maxn 5001
#define TL now<<1
#define TR now<<1|1
#define TT now>>2
#define TN tree[now]

struct node{
	int l, r, sum;
	node()
	{
		l = r = sum = 0;
	}
}tree[maxn << 2];

int num[maxn];

void Build(int now, int l, int r)
{
	TN.l = l;
	TN.r = r;
	TN.sum = 0;
	if(l == r)
		return ;
	int mid = (l + r) >> 1;
	Build(TL, l, mid);
	Build(TR, mid + 1, r);
}

int Query(int now, int l, int r)
{
	if(TN.l >= l && TN.r <= r)
		return TN.sum;
	int mid = (TN.l + TN.r) >> 1;
	int ret = 0;
	if(l <= mid) ret += Query(TL, l, r);
	if(r > mid) ret += Query(TR, l, r);
	return ret;
}

void PushUp(int now)
{
	TN.sum = tree[TL].sum + tree[TR].sum;
}

void Updata(int now, int p)
{
	if(TN.l == TN.r)
	{
		TN.sum ++;
		return ;
	}
	int mid = (TN.l + TN.r) >> 1;
	if(p > mid) Updata(TR, p);
	else Updata(TL, p);
	PushUp(now);
}

int main()
{
	int n;
	while(~scanf("%d", &n))
	{
		Build(1, 0, n - 1);
		int sum = 0;
		for(int i = 0; i < n; ++ i)
		{
			scanf("%d", &num[i]);
			//int t = sum;
			sum += Query(1, num[i], n - 1);
			//printf("*%d\n", sum - t);
			Updata(1, num[i]);
		}
		int now = sum, min = sum;
		for(int i = 0; i < n; ++ i)
		{
			now +=  (n - num[i]) - (num[i] + 1);
			min = now > min ? min : now;
		}
		printf("%d\n", min);
	}
	return 0;
}