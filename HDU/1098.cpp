#include<stdio.h>

int main()
{
    int k,a,sum;

    while(scanf("%d",&k)!=EOF)
	{
        if(k%65==0)
		{
            printf("no\n");
            continue;
        }
        for(a=1;a<66;a++)
		{
            sum=a*k;    
            if((sum%65)==47)
				break;
        }
        if(a==66)
            printf("no\n");
        else
            printf("%d\n",a);
    }
    return 0;
}