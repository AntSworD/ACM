#include <stdio.h>
#include <string.h>

#define swap(a, b) {a ^= b ^= a ^= b;}

int main()
{
	int t;
	scanf("%d", &t);
	while(t --)
	{
		int n;
		int a[201];
		memset(a, 0, sizeof(a));
		scanf("%d", &n);
		int max = 0;
		for(int i = 0; i < n; ++ i)
		{
			int x, y;
			scanf("%d %d", &x, &y);
			if(x > y)
				swap(x, y);
			for(int i = ((x + 1) >> 1); i <= ((y + 1) >> 1); ++ i)
			{
				a[i] ++;
				max = max > a[i] ? max : a[i];
			}
		}
		printf("%d\n", max * 10);
	}
	return 0;
}