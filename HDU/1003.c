#include<stdio.h>
int main(){
	int t,max,x=0,sum;
	scanf("%d",&t);
	while(t--){
		int n,i,b,l,k,j;
		x++;
		max=-1000000;
		scanf("%d",&n);
		b=0;sum=0;j=0;
		for(i=0;i<n;i++){
			scanf("%d",&k);
			sum+=k;
			if(sum<k){
				j=i;
				sum=k;
			}
			if(sum>max){
				max=sum;
				l=i;
				b=j;
			}
		}
		printf("Case %d:\n%d %d %d\n",x,max,b+1,l+1);
		if(t!=0) printf("\n");
	}
	return 0;
}
