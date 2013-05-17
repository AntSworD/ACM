#include <stdio.h>
#include <stdlib.h>
int candy[101], co[101], n;

int cmp(const void *a, const void *b)
{
	return (*(int *)a) - (*(int *)b);
}

void solve()
{
	int tmp;
	tmp = (candy[n - 1] >> 1);
	for(int i = 0; i < n; ++ i)
	{
		int tmp2 = 0;
		tmp2 = (candy[i] >> 1);
		candy[i] = tmp2 + tmp;
		if((candy[i] & 1) == 1)
			candy[i] ++;
		tmp = tmp2;
	}
}

void copy()
{
	for(int i = 0; i < n; ++ i)
		co[i] = candy[i];
}

int main()
{
	while(scanf("%d", &n) && n != 0)
	{
		for(int i = 0; i < n; ++ i)
			scanf("%d", &candy[i]);

		int cout = 0;
		copy();
		while(1)
		{
			qsort(co, n, sizeof(co[0]),cmp);
			if(co[0] == co[n - 1])
				break;
			solve();
			copy();
			cout ++;
		}

		printf("%d %d\n", cout, candy[0]);
	}
	return 0;
}