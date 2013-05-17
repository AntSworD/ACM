#include<stdio.h>
int main ()
{
	int T;
	scanf ( "%d", &T );
	while ( T -- ) {
		  double u,v,w,l, t = 0;
		  scanf ("%lf%lf%lf%lf", &u,&v,&w,&l );
		  while ( l > 1e-12 ) 
		  {
				t += l / ( u + w );
				l -= l * ( v + u ) / ( u + w ) ;
				t += l / ( w + v );
				l -= l * ( v + u ) / ( v + w ) ;
		  }
		  printf ( "%.3lf\n", t * w );
	}
	return 0;
}
