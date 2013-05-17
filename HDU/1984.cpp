#include <stdio.h>
#include <string.h>
int main()
{
	char a[90];
	int n,i;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		int k,j;
		scanf("%d %s",&k,a);
		printf("%d ",i);
		for(j = 0 ; j < strlen(a) ; j ++)
			if(j != k - 1)
				printf("%c",a[j]);
		printf("\n");
	}
	return 0;
}