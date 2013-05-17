#include <stdio.h>
#include <math.h>
int main ()
{
    int t ;
    double n ;
    double g;
    scanf ("%d", &t) ;
    while (t--)
    {
        scanf ("%lf", &n) ;
        printf ("%d\n", (int)pow(10.0, (n * log10 (n) - (__int64)(n * log10(n))))) ;    
    }
    return 0 ;
}