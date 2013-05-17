#include <stdio.h>
#include <math.h>

__int64 pd(int x, int z)
{
	if(z == 1)
		return x;
	__int64 k = pd(x, z / 2);
	if(z & 1)
		return k * k * x;
	else
		return k * k;
}

int main()
{
	int k;
	while(scanf("%d", &k)  && k != 0)
	{
		int ans = 0;
		int t = (int)sqrt((double)k);
		for(int z = 2; z <= 31; ++ z)
		{
			for(int y = 2; k > pd(y, z); ++ y)
			{
				int l = 1;
				int r = y - 1;
				int q = pd(y, z);
				while(l <= r)
				{
					int mid = (l + r) >> 1;
					int tmp = pd(mid, z) + q + mid * y * z;
					if(tmp < k)
						l = mid + 1;
					else if(tmp > k)
						r = mid - 1;
					else
					{
						ans ++;
						break;
					}
				}
			}
		}
		printf("%d\n", ans);
	}
	return 0;	
}