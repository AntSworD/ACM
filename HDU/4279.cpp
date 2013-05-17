#include <stdio.h>
#include <math.h>

__int64 sol(__int64 n)
{
	if(n < 6)
		return 0;
	__int64 k = (__int64)sqrt((double)n);
	if(k & 1)
		return ((n - 4) >> 1) + 1;
	else
		return ((n - 4) >> 1);
}

int main()
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		__int64 x, y;
		scanf("%I64d %I64d", &x, &y);

		printf("%I64d\n", sol(y) - sol(x - 1));
	}
	return 0;
}