#include<stdio.h>
#include<math.h>
int main()
{
	int i,n,a[65],k=2;
	a[1]=1;a[2]=3;
	for(i=3;i<65;i++)
	{
		a[i]=2*a[i-k]+pow(2.0,k)-1;
		if(i==5||i==9||i==14||i==20||i==27||i==35||i==44||i==54)
			k++;
	}
	while(scanf("%d",&n)!=EOF)
		printf("%d\n",a[n]);
	return 0;
}