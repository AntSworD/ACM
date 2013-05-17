#include<stdio.h>

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
					t[j]^=t[j+1]^=t[j]^=t[j+1];
		}
	}
	else
	{
		i=begin;j=end;key=t[i];
		while(i!=j)
		{
			while(i<j&&t[j]>=key)
				j--;
			t[i]=t[j];
			while(i<j&&t[i]<=key)
				i++;
			t[j]=t[i];
		}
		t[i]=key;
		sort(t,begin,j-1);
		sort(t,j+1,end);
	}
	return ;
}

int main()
{
	int n,m,a[20001];
	while(scanf("%d %d",&n,&m)!=EOF)
	{
		int i,k=0;
		for(i=0;i<n+m;i++)
			scanf("%d",&a[k++]);
		sort(a,0,k-1);
		int f;
		for(i=0;i<k;i++)
		{
			if(i==0)
			{
				printf("%d",a[i]);
				f=a[i];
			}
			else if(f!=a[i])
			{
				printf(" %d",a[i]);
				f=a[i];
			}
		}
		printf("\n");
	}
	return 0;
}