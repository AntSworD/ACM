#include<stdio.h>
int main()
{
	int x1,x2,x3,y1,y2,y3,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d%d%d%d%d%d",&x1,&x2,&x3,&y1,&y2,&y3);
		if(x1>y1)
			printf("First\n");
		else if(x1<y1)
			printf("Second\n");
		else if(x2>y2)
			printf("First\n");
		else if(x2<y2)
			printf("Second\n");
		else if(x3>y3)
			printf("First\n");
		else if(x3<y3)
			printf("Second\n");
		else
			printf("Same\n");
	}
	return 0;
}