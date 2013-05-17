#include <stdio.h>
int main()
{
	int n,t;
	scanf("%d",&t);
	while(t --)
	{
		int i , s = 0 , k ;
		scanf("%d",&n);
		for(i = 0 ; i < n ; i ++ )
		{
			scanf("%d",&k);
			s += k;
		}
		printf("%d\n", s - n + 1);
	}
	return 0;
}