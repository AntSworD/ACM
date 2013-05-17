#include<stdio.h>
int a[1001],b[1001];
void sort(int t[],int begin,int end)
{
	int key,i,j;
	if(end-begin<20)
	{
		for(i=end;i>=begin;i--)
		{
			int k=i;
			for(j=begin;j<k;j++)
				if(t[j]>t[j+1])
				{
					t[j]^=t[j+1]^=t[j]^=t[j+1];
					b[j]^=b[j+1]^=b[j]^=b[j+1];
				}
		}
	}
	else
	{
		i=begin;j=end;key=t[i];
		int temp=b[i];
		while(i!=j)
		{
			while(i<j&&t[j]>=key)
				j--;
			t[i]=t[j];
			b[i]=b[j];
			while(i<j&&t[i]<=key)
				i++;
			t[j]=t[i];
			b[j]=b[i];
		}
		t[i]=key;
		b[i]=temp;
		sort(t,begin,j-1);
		sort(t,j+1,end);
	}
	return ;
}

int main()
{
	int t,n,m;
	scanf("%d",&t);
	while(t--)
	{
		scanf("%d %d",&n,&m);
		int i,max=n;
		double sum=0;
		for(i=0;i<m;i++)
			scanf("%d %d",&a[i],&b[i]);
		sort(a,0,m-1);
		i=0;
		while(max>a[i]*b[i])
		{
			sum+=b[i];
			max-=a[i]*b[i];
			i++;
		}
		sum+=(double)max*1.0/a[i];
		printf("%.2lf\n",sum);
	}
	return 0;
}