#include <stdio.h>

int main()
{
	int x , y , flag , maxx , maxy , minx , miny ;
	maxx = maxy = -300 ;
	minx = miny = 300 ;
	while( scanf( "%d %d" , &x , &y ) )
	{
		if( x == 0 && y == 0 )
		{
			if( flag == 0 )
				break;
			else
			{
				printf( "%d %d %d %d\n" , minx , miny , maxx , maxy ) ;
				maxx = maxy = -300 ;
				minx = miny = 300;
				flag = 0 ;
				continue ;
			}
		}
		else
			flag = 1 ;
		if( x > maxx ) maxx = x ;
		if( x < minx ) minx = x ;
		if( y > maxy ) maxy = y ;
		if( y < miny ) miny = y ;
	}
	return 0 ;
}