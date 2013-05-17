#include<stdio.h>
int main(){
    int max,sum;
    int n,i,b,k,j,l,s;
    while(scanf("%d",&n)&&n!=0)
	{
		s=0;
		max=-1000000;
		b=0;sum=0;j=0;
        for(i=0;i<n;i++)
		{
            scanf("%d",&k);
			if(k>=0) s=1;
            sum+=k;
            if(sum<=k)
			{
                j=k;
                sum=k;
            }
            if(sum>max)
			{
                max=sum;
				l=j;
                b=k;
            }
        }
		if(s==0) printf("0 %d %d\n",l,k);
		else  printf("%d %d %d\n",max,l,b);
    }
    return 0;
}
