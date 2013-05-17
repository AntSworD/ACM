#include<stdio.h>
int a[1005];
int b[1005];
void dfs(int a1,int b1,int size,bool flag)
{
    int i;
    if(size==1)
    {
        printf("%d ",a[a1]);
        return ;
    }
    if(size<=0)
        return ;
	i=0;
	while(a[a1] != b[b1 + i])
		i++;
    dfs(a1+1,b1,i,false);
    dfs(a1+i+1,b1+i+1,size-i-1,false);
    if(flag==true)
        printf("%d\n",a[a1]);
    else
        printf("%d ",a[a1]);
}

int main()
{
    int n,i;
    while(scanf("%d",&n)!=EOF)
    {
        for(i=1;i<=n;i++)
            scanf("%d",&a[i]);
        for(i=1;i<=n;i++)
            scanf("%d",&b[i]);
        dfs(1,1,n,true);
    }
    return 0;
}