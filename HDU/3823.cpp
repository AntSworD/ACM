#include<stdio.h>
bool pri[30000];
void creat()
{
	int i,j;
	pri[2] = true;
	for(i = 3 ; i < 30000 ; i ++)
	{
		if( i % 2 == 0)
			pri[i] = false;
		else 
			pri[i] = true;
	}
	for( i = 3 ; i < 30000 ; i += 2)
	{
		for(j = i + i ; j < 30000 ; j += i)
			if(pri[j] == true)
				pri[j] = false;
	}
	pri[1] = false;
}

int pd(int x,int y)
{
	int i ;
	for(i=x + 1 ; i < y ; i ++ )
		if(pri[i] == true )
			return 1;
	return 0;
}

int main()
{
	int a,b,t,i;
	creat();
	scanf("%d",&t);
	for(i=1;i<=t;i++)
	{
		scanf("%d %d",&a,&b);
		if(a>b) a^=b^=a^=b;
		int j,k=-1;
		for(j = 0;j <= 30000 ; j ++)
		{
			if(pri[a+j] == true && pri[b+j] == true && a != b)
			{
				if(pd(a + j , b + j) == 0 )
				{
					k = j;
					break ;
				}
			}
		}
		printf("Case %d: %d\n",i,k);
	}
	return 0;
}