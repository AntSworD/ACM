#include<stdio.h>
int main()
{
	char as[1001],bs[1001];
	int n,i,j,sa,sb,sm;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int a[1001]={0},b[1001]={0},s[1001]={0};
		scanf("%s",&as);
		sa=strlen(as);
		scanf("%s",&bs);
		sb=strlen(bs);
		if(sa>=sb) 
		{
			sm=sa;
			for(j=0;j<sa;j++) a[j]=as[j]-'0';
			for(j=sa-sb;j<sm;j++) b[j]=bs[j-(sa-sb)]-'0';
		}
		else 
		{
			sm=sb;
			for(j=0;j<sb;j++) b[j]=bs[j]-'0';
			for(j=sb-sa;j<sm;j++) a[j]=as[j-(sb-sa)]-'0';
		}
		for(j=sm;j>0;j--)
		{
			s[j-1]=(s[j]+a[j-1]+b[j-1])/10;
			s[j]=(s[j]+a[j-1]+b[j-1])%10;
		}
		printf("Case %d:\n",i+1);
		printf("%s + %s = ",as,bs);
		if(s[0]!=0) printf("%d",s[0]);
		for(j=1;j<sm+1;j++) printf("%d",s[j]);
		printf("\n");
		if(i!=n-1) printf("\n");
	}
	return 0;
}