#include<stdio.h>
#include<math.h>
int main()
{
	int i,t,n;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d",&n);
		for(i=sqrt(n);i<=n;i++)
		{
			if(((1+i)*i)/2>=n)
			{
				n=n-(i*(i-1))/2;
				break;
			}
		}
		if(n%9==0)
			printf("9\n");
		else
			printf("%d\n",n%9);
	}
	return 0;
}