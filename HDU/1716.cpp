#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int s[4];
int res[4];
bool b[4];
int k=-1;
int cmp(const void * a,const void * b)
{
    return *(int * )a-*(int *)b;
}
void backtrace(int n)
{
    if(n==4)
    {
		int j;
		if(res[0]==0) return;
		if(k!=res[0]&&k!=-1)
			printf("\n");
		else if(k==res[0])
			printf(" ");
        for(j=0;j<4;j++)
			printf("%d",res[j]);
		k=res[0];
        return ;
    }
    int i;
    for(i=0;i<4;i++)
    {
        if(b[i]==false)
        {
            res[n]=s[i];
            b[i]=true;
            backtrace(n+1);
            b[i]=false;
            while(i<3 && s[i]==s[i+1])
                i++;
        }    
    }
}
int main()
{
	int i;
    while(scanf("%d %d %d %d",&s[0],&s[1],&s[2],&s[3])&&s[0]+s[1]+s[2]+s[3]!=0)
	{
		if(k!=-1)
			printf("\n");
		k=-1;
		qsort(s,4,sizeof(s[0]),cmp);
		memset(b,0,sizeof(b));
		backtrace(0);
		printf("\n");
	}
    return 0;
}
