#include <stdio.h>
void main()
{
    int x,y,i,j,a[20][20],n;
    while(scanf("%d",&n)&&n)
        {

                y=(n+1)/2;x=y+1;
                for(i=1;i<=n*n;i++)
                    {
                        a[x][y]=i;
                        if(i % n == 0 )
                            x += 2;
                        else
                        {
                            x+=1;
                            y+=1;
                        }
                        if(x>n)
                            x-=n;
                        if(y>n)
                            y-=n;
                    }
            for(i=1;i<=n;i++)
                {
                    for(j=1;j<=n;j++)
                        printf("%4d",a[i][j]);
                    printf("\n");
                }
        }
	return 0;
}
