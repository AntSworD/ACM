#include <stdio.h>

#define INF 0x3fffffff

int num[500001], len[500001], dp[500001];
int size;

int debug(int n, int mlen)
{
	int l = 1;
	int r = mlen;
	if(len[l] > n)
		return 0;
	if(len[mlen] <= n)
		return mlen;
	while(l + 1 < r)
	{
		int m = (l + r) >> 1;
		if(len[m] <= n)
			l = m;
		else
			r = m;
	}
	return l;
}

int lis()
{
	for(int i = 1; i <= size; ++ i)
	{
		dp[i] = 0;
		len[i] = INF;
	}
	dp[1] = 1;
	len[1] = num[1];
	int mlen = 1;
	for(int i = 2; i <= size; ++ i)
	{
		dp[i] = debug(num[i], mlen) + 1;
		if(len[dp[i]] > num[i])
			len[dp[i]] = num[i];
		if(dp[i] > mlen)
			mlen = dp[i];
	}
	return mlen;
}

int main()
{
	int t = 0;
	while(~scanf("%d", &size))
	{
		for(int i = 1; i <= size; ++ i)
		{
			int a, b;
			scanf("%d %d", &a, &b);
			num[a] = b;
		}
		int ans = lis();
		printf("Case %d:\n", ++ t);
		if(ans == 1)
			printf("My king, at most %d road can be built.\n\n", ans);
		else
			printf("My king, at most %d roads can be built.\n\n", ans);
	}
	return 0;
}