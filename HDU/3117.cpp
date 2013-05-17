#include < stdio.h >
#include < string.h >

int max(int x,int y)
{
	return x > y? x : y ;
}

void add(char a[], char b[])
{
	char e[1000] ;
	int len;
	strrev(a);
	strrev(b);
	len = max( strlen(a) , strlen(b));
	int k = 0 , i ;
	for(i = 0 ; i < len ; i++)
	{
		if( a[i] > '9' || a[i] < '0')
			a[i] = '0';
		if( b[i] > '9' || b[i] < '0')
			b[i] = '0';
		e[i] = a[i] + b[i] - 2 * '0' + k ;
		k = e[i] / 10 ;
		e[i] = e[i] % 10 + '0' ;
	}
	a[i] = b[i] = '\0' ;
	if(k != 0)
	{
		e[i] = k + '0' ;
		i++;
	}
	e[i] = '\0' ;
	strcpy(a,b);
	strcpy(b,e);
	strrev(a);
	strrev(b);
}


int main()
{
	char a[2010], b[2010];
	int n;
	while(scanf("%d",&n) != EOF)
	{
		strcpy(a,"1");
		strcpy(b,"1");
		if(n == 0)
		{
			printf("0\n");
			continue ;
		}
		if(n <= 2)
		{
			printf("1\n");
			continue ;
		}
		int i;
		for(i=0;i<n-2;i++)
			add(a,b);
		int len=strlen(b);
		if(len<=8)
			printf("%s\n",b);
		else
		{
			int i;
			for(i = 0 ; i < 4 ; i ++ )
				printf("%c",b[i]);
			printf("...");
			for(i = len - 4 ; i < len ; i ++ )
				printf("%c",b[i]);
			printf("\n");
		}
	}
	return 0;
}