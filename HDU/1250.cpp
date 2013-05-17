#include < stdio.h >
#include < string.h >
int max(int i, int j, int m, int n)
{
	if(i >= j && i >= m && i >= n)
		return i;
	if(j >= i && j >= m && j >= n)
		return j;
	if(m >= j && m >= i && m >= n)
		return m;
	return n;
}

void add(char a[], char b[], char c[], char d[])
{
	char e[2010] ;
	int len;
	strrev(a);
	strrev(b);
	strrev(c);
	strrev(d);
	len = max( strlen(a) , strlen(b) , strlen(c) , strlen(d) );
	int k = 0 , i ;
	for(i = 0 ; i < len ; i++)
	{
		if( a[i] > '9' || a[i] < '0')
			a[i] = '0';
		if( b[i] > '9' || b[i] < '0')
			b[i] = '0';
		if( c[i] > '9' || c[i] < '0')
			c[i] = '0';
		if( d[i] > '9' || d[i] < '0')
			d[i] = '0';
		e[i] = a[i] + b[i] + c[i] + d[i] - 4 * '0' + k ;
		k = e[i] / 10 ;
		e[i] = e[i] % 10 + '0' ;
	}
	a[i] = b[i] = c[i] = d[i] = '\0' ;
	if(k != 0)
	{
		e[i] = k + '0' ;
		i++;
	}
	e[i] = '\0' ;
	strcpy(a,b);
	strcpy(b,c);
	strcpy(c,d);
	strcpy(d,e);
	strrev(a);
	strrev(b);
	strrev(c);
	strrev(d);
}

int main()
{
	char a[2010], b[2010], c[2010], d[2010];
	int n;
	while(scanf("%d",&n) != EOF)
	{
		strcpy(a,"1");
		strcpy(b,"1");
		strcpy(c,"1");
		strcpy(d,"1");
		if(n <= 4)
		{
			printf("1\n");
			continue ;
		}
		int i;
		for(i=0;i<n-4;i++)
			add(a,b,c,d);
		printf("%s\n",d);
	}
	return 0;
}