#include<stdio.h>
#include<string.h>
int main(){
	char a[1005];
	int l,i,sum;
	while(gets(a))
	{
		sum=0;
		for(i=0;i<strlen(a);i+=2)
		{
			if(a[i]=='A') 
				sum+=4;
			else if(a[i]=='B')
				sum+=3;
			else if(a[i]=='C')
				sum+=2;
			else if(a[i]=='D')
				sum+=1;
			else if(a[i]=='F')
				sum+=0;
			else 
				break;
		}
		if(i==strlen(a)+1) printf("%.2lf\n",(double)(sum*1.0/((strlen(a)+1)/2)));
		else printf("Unknown letter grade in input\n");
	}
	return 0;
}