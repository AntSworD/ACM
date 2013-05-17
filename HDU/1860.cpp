#include<stdio.h>
#include<string.h>
int main()
{
	char a[90],b[90];
	int lena,lenb;
	while(1)
	{
		gets(a);
		if(strcmp(a,"#")==0) break;
		gets(b);
		lena=strlen(a);
		lenb=strlen(b);
		int i,j,s;
		for(i=0;i<lena;i++)
		{
			printf("%c ",a[i]);
			s=0;
			for(j=0;j<lenb;j++)
				if(a[i]==b[j])
					s++;
			printf("%d\n",s);
		}
	}
	return 0;
}