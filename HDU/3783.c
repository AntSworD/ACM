#include<stdio.h>
#include<string.h>
int main(){
	int i,l;
	char a[105];
	while(scanf("%s",a)&&a[0]!='E')
	{
		int z=0,o=0,j=0;
		getchar();
		l=strlen(a);
		for(i=0;i<l;i++)
		{
			if(a[i]=='Z') z++;
			if(a[i]=='O') o++;
			if(a[i]=='J') j++;
		}
		while(z+o+j!=0)
		{
			if(z>0)
			{
				printf("Z");
				z--;
			}
			if(o>0)
			{
				printf("O");
				o--;
			}
			if(j>0)
			{
				printf("J");
				j--;
			}
		}
		printf("\n");
	}
	return 0;
}