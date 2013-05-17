#include<stdio.h>
int main()
{
	int t,k;
	scanf("%d",&t);
	getchar();
	for(k=0;k<t;k++)
	{
		char a[1001];
		int s,i,j,m;
		gets(a);
		s=strlen(a);
		if(a[0]!=' ') m=0;
		for(i=0;i<s;i++)
		{
			if(a[i]==' '&&a[i+1]!=' ') m=i+1;
			if(a[i]==' ') printf(" ");
			if(a[i]!=' '&&(a[i+1]==' '||a[i+1]=='\0')) 
			{
				for(j=i;j>=m;j--) printf("%c",a[j]);
			}
		}
		printf("\n");
	}
	return 0;
}