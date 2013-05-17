#include<stdio.h>
int main()
{
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		__int64 y;
		int i,n;
		scanf("%I64d %d",&y,&n);
		while(!((y%4==0&&y%100!=0)||y%400==0)) y++;
		for(i=1;i<n;)
		{
			y+=4;
			if((y%4==0&&y%100!=0)||y%400==0) i++;
		}
		printf("%I64d\n",y);
	}
	return 0;
}