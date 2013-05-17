#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int sa,sb,j,k;
		char a[101],b[51];
		scanf("%s",a);
		sa=strlen(a);
		scanf("%s",b);
		sb=strlen(b);
		for(j=sa/2+sb;j<sa+sb;j++) a[j]=a[j-sb];
		k=0;
		for(j=sa/2;j<sa/2+sb;j++) 
		{
			a[j]=b[k];
			k++;
		}
		for(j=0;j<sa+sb;j++) printf("%c",a[j]);
		printf("\n");
	}
	return 0;
}