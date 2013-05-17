#include<stdio.h>
#include<cstdio> 
#include<cstring> 
#include<algorithm> 
using namespace std; 
int a[100005];

int main(){
	int m,n,i,j;
	while(scanf("%d",&n)!=EOF)
	{
		for(i=0;i<n;i++)
			scanf("%d",&a[i]);
		sort(a,a+n);
		if(n%2==0) j=n/2;
		else j=n/2+1;
		i=n-1;
		while(i!=j)
		{
			printf("%d %d",a[i],a[i-1]);
		}
	}
	return 0;
}