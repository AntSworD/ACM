#include <stdio.h>
int main ()
{
          int N;
          scanf ("%d", &N );
          for ( int i = 0; i < N; i ++ )
          {
              if ( i != 0 )
              printf ("\n");
              int m, n,ncase = 0;
              while ( scanf ("%d %d", &n, &m) && m+n!=0)
              {
                    ncase ++; 
                    int res = 0;
					int a,b;
                    for ( a = 1; a < n; a ++ )
                        for ( b = a + 1; b < n; b ++ )
                            if ( (a * a + b * b + m) % ( a * b ) == 0 )      
								res ++;
                    printf ("Case %d: %d\n", ncase, res);
              }
              
          }
   return 0;
}