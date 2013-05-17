#include<stdio.h>
#include<cstdio> 
#include<cstring> 
#include<algorithm> 
using namespace std; 
int a[100005];

int main(){
	long n,i;
	int m;
	while(scanf("%ld %d",&n,&m)&&m+n!=0)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		for(i=n-1;i>n-m;i--)
			printf("%d ",a[i]);
		printf("%d\n",a[n-m]);
	}
	return 0;
}