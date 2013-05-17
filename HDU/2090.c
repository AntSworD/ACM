#include <stdio.h>
int main()
{
	char a[100];
	double s=0.0,b,c;
	while(scanf("%s %lf %lf",a,&b,&c)!=EOF)
		s+=b*c*1.0;
	printf("%.1lf\n",s);
	return 0;
}