#include<stdio.h>
int main(){
	int t;
	scanf("%d",&t);
	while(t--)
	{
		int n,m,i,a,s;
		s=0;
		scanf("%d %d",&n,&m);
		for(i=0;i<m*n;i++)
		{
			scanf("%d",&a);
			if(a==1) s++;
		}
		printf("%d\n",s);
	}
	return 0;
}