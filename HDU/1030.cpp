#include <stdio.h>
#include <math.h>

int main()
{
	int m, n;
	while(~scanf("%d %d", &m, &n))
	{
		int up = (int)ceil(sqrt((double)m));
		int down = (int)ceil(sqrt((double)n));
		int ml = (int)ceil((double)(m - (up - 1) * (up - 1))/2);
		int nl = (int)ceil((double)(n - (down - 1) * (down - 1))/2);
		int mr = (int)ceil((double)(up * up - m + 1)/2);
		int nr = (int)ceil((double)(down * down - n + 1)/2);
		printf("%d\n", abs(up - down) + abs(ml - nl) + abs(mr - nr));
	}
	return 0;
}