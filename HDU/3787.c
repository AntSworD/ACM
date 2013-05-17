#include<stdio.h>
#include<stdio.h>
long zh(char a[])
{
	long x=0;
	int len,i;
	len=strlen(a);
	for(i=0;i<len;i++)
	{
		if(a[i]>='0'&&a[i]<='9')
		{
			x=x*10;
			x=x+a[i]-'0';
		}
	}
	if(a[0]=='-') 
		x=-x;
	return x;
}

int main()
{
	char m[12],n[12];
	long q;
	while(scanf("%s%s",m,n)!=EOF)
	{
		q=zh(m)+zh(n);
		printf("%ld\n",q);
	}
	return 0;
}