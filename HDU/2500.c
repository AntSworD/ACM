#include<stdio.h>
int main()
{
	int n,i;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
		int m,j,k;
		scanf("%d",&m);
		for(j=0;j<3*m;j++) 
		{
			for(k=0;k<m;k++) printf("HDU");
			printf("\n");
		}
	}
	return 0;
}