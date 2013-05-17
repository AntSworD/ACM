#include<stdio.h>
#include<string.h>
int main(){
	int l,i;
	double a;
	char b,c[205];
	while(scanf("%c %s",&b,c)!=EOF)
	{
		a=0;
		getchar();
		if(b>='A'&&b<='Z') b=b+32;
		l=strlen(c);
		for(i=0;i<l;i++)
			if(c[i]==b||c[i]==b-32) a++;
		printf("%.5lf\n",a/l);
	}
	return 0;
}
