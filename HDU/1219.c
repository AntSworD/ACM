#include<stdio.h>
int main()
{
	char buf[100001];
	while(gets(buf))
	{
		long s,a[27]={0},i;
		char c[27];
		c[0]=96;
		for(i=1;i<27;i++) c[i]=c[i-1]+1;
		s=strlen(buf);
		for(i=0;i<s;i++) if(buf[i]>=97&&buf[i]<=122) a[buf[i]-96]++;
		for(i=1;i<=26;i++) printf("%c:%ld\n",c[i],a[i]);
		printf("\n");
	}
	return 0;
}