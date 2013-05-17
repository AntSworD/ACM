#include<stdio.h>
int main()
{
	__int64 s[30];
	s[1]=3;
	int i;
	for(i=2;i<30;i++)
		s[i]=3*s[i-1];
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&i);
		printf("%I64d\n",s[i]);
	}
	return 0;
}