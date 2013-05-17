#include<stdio.h>
int main(){
	int t,a,i=0;
	while(scanf("%d",&t)&&t>0)
	{
		__int64 s=0;
		i++;
		while(t--)
		{
			scanf("%d",&a);
			s+=a;
		}
		printf("Sum of #%d is %I64d\n",i,s);
	}
	return 0;
}
