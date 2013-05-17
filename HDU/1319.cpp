#include<stdio.h>
bool pri[1001];
void creat()
{
	int i,j;
	pri[2] = true;
	for(i = 3 ; i < 1001 ; i ++)
	{
		if( i % 2 == 0)
			pri[i] = false;
		else 
			pri[i] = true;
	}
	for( i = 3 ; i < 1001 ; i += 2)
	{
		for(j = i + i ; j < 1001 ; j += i)
			if(pri[j] == true)
				pri[j] = false;
	}
	pri[1] = true;
}
int main()
{
	int n,c,b[200],j,i,k;
	creat();
	while(scanf("%d %d",&n,&c)!=EOF)
	{
		if(n % 2==0)
			j = 2 * c;
		else
			j = 2 * c -1;
		k = 0 ;
		for( i = n ; i >= 1; i --)
		{
			if(pri[i] == true)
				b[k++] = i;
			if( k >= j)
				break;
		}
		printf("%d %d: ",n,c);
		for(i = k - 1 ; i > 0; i --)
			printf("%d ",b[i]);
		printf("%d\n\n",b[i]);
	}
	return 0;
}