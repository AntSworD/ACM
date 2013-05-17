#include<stdio.h>
int main()
{
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int i,k;
		float max=0,a[101];
		scanf("%d",&k);
		for(i=0;i<k;i++)
		{
			scanf("%f",&a[i]);
			if(a[i]>max) 
				max=a[i];
		}
		printf("%.2f\n",max);
	}
	return 0;
}
