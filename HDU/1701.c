#include<stdio.h>
int main()
{
	int t,k;
	scanf("%d",&t);
	for(k=0;k<t;k++)
	{
		float x,y;
		int i;
		scanf("%f %f",&x,&y);
		for(i=0;;i++)
		{
			if((int)(y*0.01*i)-(int)(x*0.01*i)==1) 
			{
				printf("%d\n",i);
				break;
			}
		}
	}
	return 0;
}