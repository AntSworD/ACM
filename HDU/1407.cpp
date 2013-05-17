#include<stdio.h>
#include<math.h>
int main()
{
	int num,x,y,z;
	while(scanf("%d",&num)!=EOF)
	{
		z=-1;
		for(x=1;x<=sqrt(num);x++)
		{
			for(y=x;y<=sqrt(num);y++)
			{
				if(sqrt(num*1.0-x*x*1.0-y*y*1.0)==(int)sqrt(num-x*x-y*y))
				{
					z=sqrt(num-x*x-y*y);
					if(z>0)
						break;
				}
			}
			if(z>0) break;
		}
		printf("%d %d %d\n",x,y,z);
	}
	return 0;
}