#include<stdio.h>
int num[70001];
int main ()
{
    for ( int i = 2; i <= 70000; ++ i )
    {
		if ( !num[i] )
			for ( int j = 2; i * j <= 70000; ++ j )
			{
                num[i*j] = 1; 
			} 
    }
    int N;
    while ( scanf("%d",&N)!=EOF )
    {
		int n = N;
		int f = 1,i;
		while ( n != 1 )
		{     
			for (i = 2 ; i <= 65535;  i++ )
			{
				if ( num[i] == 0 && n % i == 0 )
				{
					if ( f==1 )
					{
						printf("%d",i); 
						f = 0;
					}
					else
						printf("*%d",i);
					break;
				} 
			} 
			n/= i;
		} 
		printf("\n");
    }
    return 0; 
}
