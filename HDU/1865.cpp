#include<stdio.h>
#include<string.h>

void add(char a[], char b[])
{
    char c[2010] ;
    int len;
    strrev(a);
    strrev(b);
	len=strlen(a)>strlen(b) ? strlen(a) : strlen(b);
    int k = 0 , i ;
    for(i = 0 ; i < len ; i++)
    {
		if(a[i] > '9' || a[i] < '0') a[i] = '0';
		if(b[i] > '9' || b[i] < '0') b[i] = '0';
        c[i] = a[i] + b[i] - 2 * '0' + k ;
        k = c[i] / 10 ;
        c[i] = c[i] % 10 + '0' ;
    }
    if(k != 0)
        c[i++] = k + '0' ;
    c[i] = '\0' ;
    strcpy(a,b);
    strcpy(b,c);
    strrev(a);
    strrev(b);
}

int main()
{
	char c[201];
	int t;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%s",c);
		int len=strlen(c);
		if(len==1)
		{
			printf("1\n");
			continue;
		}
		if(len==2)
		{
			printf("2\n");
			continue;
		}
		char a[1000]="1",b[1000]="2";
		int i;
		for(i=0;i<len-2;i++)
			add(a,b);
		printf("%s\n",b);
	}
	return 0;
}