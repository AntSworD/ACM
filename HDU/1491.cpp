#include<stdio.h>
int main()
{
	int n,m,s,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&m,&n);
		if(m==1)
			s=n;
		else if(m==2)
			s=31+n;
		else if(m==3)
			s=31+28+n;
		else if(m==4)
			s=31+28+31+n;
		else if(m==5)
			s=31+28+31+30+n;
		else if(m==6)
			s=31+28+31+30+31+n;
		else if(m==7)
			s=31+28+31+30+31+30+n;
		else if(m==8)
			s=31+28+31+30+31+30+31+n;
		else if(m==9)
			s=31+28+31+30+31+30+31+31+n;
		else if(m==10)
			s=31+28+31+30+31+30+31+31+30+n;
		if(m>10||(m==10&&n>21))
			printf("What a pity, it has passed!\n");
		else if(m==10&&n==21)
			printf("It's today!!\n");
		else 
			printf("%d\n",294-s);
	}
	return 0;
}