#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>
#include<algorithm>
using namespace std;

struct point{
	int t, p, s;
}pos[103];
int dp[103];

bool cmp(point p1,point p2)
{
    return p1.t<p2.t;
}

int main()
{
	int n, k, t;
	scanf("%d %d %d", &n, &k, &t);
	for (int i = 1; i <= n; ++ i)
		scanf("%d", &pos[i].t);
	for (int i = 1; i <= n; ++ i)
		scanf("%d", &pos[i].p);
	for (int i = 1; i <= n; ++ i)
		scanf("%d", &pos[i].s);
	sort(pos + 1, pos + n + 1, cmp);
	pos[0].t = pos[0].p = pos[0].s = dp[0] = 0;
	int ans = 0;
	for (int i = 1; i <= n; ++ i)
	{
		for (int j = i - 1; j >= 0; -- j)
		{
			if(dp[j] >= pos[j].p)
				if (abs(pos[i].s - pos[j].s) <= pos[i].t - pos[j].t)
					dp[i] = dp[i] > dp[j] + pos[i].p? dp[i] : pos[i].p + dp[j];
		}
		ans = ans > dp[i] ? ans : dp[i];
	}
	printf("%d\n", ans);
	return 0;
}