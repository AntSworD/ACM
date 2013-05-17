#include<stdio.h>
int main()
{
	int a[51];
	int t,k,p,i,n,j,q,s;
	for(i=0;i<51;i++)
		a[i]=0;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		scanf("%d",&p);
		for(i=0;i<p;i++)
		{
			scanf("%d",&n);
			scanf("%d",&a[n]);
		}
		s=0;
		for(i=0;i<51;i++)
		{
			if(a[i]!=0)
			{
				for(q=0;q<a[i];q++)
				{
					printf(">+");
					for(j=0;j<i-2;j++)
						printf("-");
					printf("+>\n");
				}
				s++;
			}
				printf("\n");
			if (s>=p)
			{
				break;
			}
		}
	}
}