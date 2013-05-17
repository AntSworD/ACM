#include <stdio.h>
#include <math.h>

const double Sqr = sqrt(2.0);

int main()
{
	int n, m;
	int t;
	scanf("%d", &t);
	for(int i = 1; i <= t; ++ i)
	{
		scanf("%d %d", &n, &m);
		double ans = 0;
		if((n & 1) && (m & 1))
			ans = (n * m - 1) + Sqr;
		else
			ans = n * m;
		printf("Scenario #%d:\n", i);
		printf("%.2lf\n\n", ans);
	}
	return 0;
}