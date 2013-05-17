#include<stdio.h>
int main()
{
	__int64 n,r,e,c;
	scanf("%I64d",&n);
	while(n--)
	{
		scanf("%I64d %I64d %I64d",&r,&e,&c);
		if(r==e-c)
			printf("does not matter\n");
		else 
			if(r>e-c)
				printf("do not advertise\n");
			else
				printf("advertise\n");
	}
	return 0;
}