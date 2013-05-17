#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[1001];
		int j,s;
		scanf("%s",a);
		s=strlen(a);
		for(j=0;j<s;j++) 
		{
			if(a[j]>='A'&&a[j]<='Z') a[j]+=32;
			if(a[j]=='a'||a[j]=='e'||a[j]=='i'||a[j]=='o'||a[j]=='u') a[j]-=32;
		}
		printf("%s\n",a);
	}
	return 0;
}