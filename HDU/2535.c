#include<stdio.h>
int a[105];
void sort(int x,int y)
{
	int i=x,j=y,key=a[x];
	if(i>j) return ;
	while(i!=j)
	{
		while(j>i&&a[j]>=key)//小到大的
			j--;
		a[i]=a[j];
		while(i<j&&a[i]<=key)
			i++;
		a[j]=a[i];
	}
	a[j]=key;
	sort(x,j-1);
	sort(j+1,y);
}

int main(){
	int n;
	while(scanf("%d",&n)&&n!=0)
	{
		int i,s=0;
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(0,n-1);
		for(i=0;i<=n/2;i++)
			s+=(a[i]/2)+1;
		printf("%d\n",s);
	}
	return 0;
}