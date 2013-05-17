#include<stdio.h>
__int64 c[31][31];
void group(){
	int i,j;
	for(i=0;i<31;i++)
		for(j=0;j<31;j++)
			c[i][j]=0;
	for(i=0;i<31;i++){
		for(j=0;j<=i;j++){
			if(j==0) c[i][j]=1;
			else 
				c[i][j]=c[i-1][j]+c[i-1][j-1];
		}
	}
}
int main(){
	__int64 t,k,a[31],b,i;
	group();
	a[0]=0;a[1]=0;a[2]=1;     
		for(k=3;k<=15;k++)        
			a[k]=(k-1)*(a[k-1]+a[k-2]);
	while(scanf("%d",&t)&&t!=0){
		k=t/2;b=1;
		for(i=2;i<k;i++)
			b+=c[t][i]*a[i];
		if(t==1||t==2) 
			printf("1\n");
		else 
			printf("%I64d\n",b);
	}
	return 0;
}