#include<stdio.h>
int main()
{
	int n1,n2,n5;
	while(scanf("%d %d %d",&n1,&n2,&n5)&&n1+n2+n5!=0)
	{
		if(n1==0)
			printf("1\n");
		else if(n1+n2*2<4)
			printf("%d\n",n1+n2*2+1);
		else
			printf("%d\n",n1+n2*2+n5*5+1);
	}
	return 0;
}