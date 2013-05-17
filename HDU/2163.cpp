#include <stdio.h>
#include <string.h>
int main()
{
	char a[100],b[100];
	int i = 0;
	while(1)
	{
		scanf("%s",a);
		i++;
		if( strcmp(a,"STOP") == 0) break ;
		strcpy( b, a);
		strrev(a);
		if(strcmp(a, b)==0)
			printf("#%d: YES\n",i);
		else 
			printf("#%d: NO\n",i);
	}
	return 0;
}