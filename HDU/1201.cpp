#include<stdio.h>
bool pd(int y)
{
	if((y%4==0&&y%100!=0)||y%400==0)
		return true;
	else 
		return false;
}
int main()
{
	int y,m,d,t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d-%d-%d",&y,&m,&d);
		if(pd(y)==true&&m==2&&d==29)
			printf("-1\n");
		else
		{
			if(pd(y)==true&&m>2) printf("6574\n");
			else if(pd(y) == true && m <= 2) printf("6575\n");
			else if(pd(y+1)==true ) printf("6575\n");
			else if(pd(y+2)==true && m>2) printf("6575\n");
			else if(pd(y+2)==true && m<=2) printf("6574\n");
			else if(pd(y+3)==true) printf("6574\n");
		}
	}
	return 0;
}