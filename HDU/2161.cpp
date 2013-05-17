#include<stdio.h>
int a[16001];
int main()
{
	int i,j;
	a[0]=0;
	a[1]=0;
	a[2]=0;
	for(i=3;i<16001;i++)
		if(i%2==0) a[i]=0;
		else a[i]=1;
	for(i=3;i<16001;i++)
		if(a[i])
			for(j=i+i;j<16001;j+=i)
				a[j]=0;
	i=0;
	while(scanf("%d",&j)&&j>0)
	{
		i++;
		if(a[j]) printf("%d: yes\n",i);
		else printf("%d: no\n",i);
	}
	return 0;
}