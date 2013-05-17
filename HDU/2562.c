#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		char a[51],t;
		int j,s;
		scanf("%s",a);
		s=strlen(a);
		for(j=0;j<s;j+=2) 
		{
			t=a[j];
			a[j]=a[j+1];
			a[j+1]=t;
		}
		printf("%s\n",a);
	}
	return 0;
}