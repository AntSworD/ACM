#include <stdio.h>
#include<string.h>
int main()
{
	char a[10][5],b[1005],c[505];
	strcpy(a[2],"KXV");
	strcpy(a[3],"MCN");
	strcpy(a[4],"OPH");
	strcpy(a[5],"QRS");
	strcpy(a[6],"ZYI");
	strcpy(a[7],"JADL");
	strcpy(a[8],"EGW");
	strcpy(a[9],"BUFT");
	while(scanf("%s",b)!=EOF)
	{
		int l=strlen(b),i;
		for(i=0;i<l;i+=2)
			c[i/2]=a[b[i]-'0'][b[i+1]-'0'-1];
		c[i/2]='\0';
		l=strlen(c);
		if(l%2)
			printf("%c",c[l/2]);
		for(i=0;i<l/2;i++)
			printf("%c%c",c[l-1-i],c[l/2-1-i]);
		printf("\n");
	}
	return 0;
}