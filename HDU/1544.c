#include<stdio.h>
#include<string.h>
char a[20001];
int main()
{
	while(scanf("%s",a)!=EOF)
	{
		int s,m,n,i,k;
		s=strlen(a);
		k=s;
		for(i=0;i<s;i++)
		{
			m=i-1;n=i+1;
			while(m>=0&&n<s&&a[m]==a[n])
			{
				m--;
				n++;
				k++;
			}
			m=i;n=i+1;
			while(m>=0&&n<s&&a[m]==a[n])
			{
				m--;
				n++;
				k++;
			}
		}
		printf("%d\n",k);
	}
	return 0;
}
