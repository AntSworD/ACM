#include<stdio.h>
int main()
{
	char c[1001];
	int a[3];
	while(scanf("%s",c)!=EOF)
	{
		int i = 0 ;
		a[0]=0;
		while( c[i++] == 'o')
			a[0] ++ ;
		if( c[i-1] != 'z')
		{
			printf("Wrong Answer\n");
			continue;
		}
		a[1]=0;
		while( c[i++] == 'o')
			a[1] ++ ;
		if( c[i-1] != 'j' ||a[1] == 0)
		{
			printf("Wrong Answer\n");
			continue;
		}
		a[2]=0;
		while( c[i++] == 'o')
			a[2] ++ ;
		if( c[i-1] != '\0')
		{
			printf("Wrong Answer\n");
			continue;
		}
		if(a[2] == a[0] * a[1])
			printf("Accepted\n");
		else
			printf("Wrong Answer\n");
	}
	return 0;
}