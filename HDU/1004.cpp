#include <stdio.h>

__int64 list[46343];

int main()
{
	list[1] = 0;
	for(int i = 2; i < 46343; ++ i)
		list[i] = i * i - 1 - (i - 1) * (i - 1) + list[i - 1];
	__int64 n, m, sum;
	int t;
	scanf("%d", &t);
	for(int tt = 0; tt < t; ++ tt)
	{
		scanf("%I64d", &n);
		for(__int64 i = 46342; i > 0; -- i)
		{
			if(n > list[i])
			{
				m = i * i + n - list[i];
				sum = 0;
				for(__int64 j = 2; j <= i; ++ j)
					sum += (j - 1) * (list[j] - list[j - 1] + 1);
				sum += i * (n - list[i] + 1);
				break;
			}
		}
		printf("%I64d %I64d\n", m, sum);
	}

	return 0;
}