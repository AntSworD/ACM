#include<stdio.h>
#include<string.h>
__int64 f[55];
void sort1(int begin,int end){
	int i,j;
	__int64 p;
	for(i=begin;i<end;i++)
		for(j=begin;j<end-i;j++)
			if(f[i]>f[i+1]){     
				p=f[i];
				f[i]=f[i+1];
				f[i+1]=p;
			}
}
void sort2(int x,int y)
{
	__int64 key=f[x];
	int i=x,j=y;
	if(i>j) return ;
	while(i!=j)
	{
		while(j>i&&f[j]>=key)
			j--;
		f[i]=f[j];
		while(i<j&&f[i]<=key)
			i++;
		f[j]=f[i];
	}
	f[j]=key;
	sort2(x,j-1);
	sort2(j+1,y);
}


int main()
{
	char a[1005];
	int m,n,i,l,j;	
	__int64 b;
	while(scanf("%s",a)!=EOF)
	{
		m=0;
		l=strlen(a);
		i=0;
		while(a[m]=='5')
			m++;
		for(;m<l;)
		{
			b=0;
			n=0;
			while(a[m]!='5'&&m<l)
			{
				b=b*10+(a[m]-'0');
				m++;
				n=1;
			}
			if(n==1) f[i++]=b;
			m++;
		}
		if(i<=20) sort1(0,i-1);
		else sort2(0,i-1);
		for(j=0;j<i-1;j++)
			printf("%I64d ",f[j]);
		printf("%d\n",f[j]);
	}
	return 0;
}