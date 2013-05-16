#include <stdio.h>
#include <string.h>
bool f[60001];

int main()
{
	int count = 0;
	while(1)
	{
		int c[7];
		count ++;
		int total = 0;
		for (int i = 1; i < 7; ++ i)
		{
			scanf("%d", &c[i]);
			total += c[i] * i;
		}
		if (total == 0) return 0;
		printf("Collection #%d:\n", count);
		if ((int)(total / 2) * 2 != total)
		{
			printf("Can't be divided.\n\n");
			continue;
		}
		memset(f, false, sizeof(f));
		f[0] = true;
		int used[60001];
		for (int i = 1; i < 7; ++ i)
		{
			memset(used, 0, sizeof(used));
			int k = 0;
			if (c[i] == 0)
				continue ;
			for (int j = i; j <= total / 2; ++ j)
			{
				if (f[j])
					continue ;
				if (f[j - i])
				{
					used[j] = used[j - i] + 1;
					if (used[j] <= c[i])
						f[j] = true;

				}
			}
		}
		if (f[total / 2] != true)
			printf("Can't be divided.\n\n");
		else
			printf("Can be divided.\n\n");
	}
	return 0;
}