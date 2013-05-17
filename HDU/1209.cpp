#include<iostream>
#include<string>
#include<cmath>
#include<algorithm>
#include<cstdio>
using namespace std;
struct node{
    int x,y;
    double jiao;    
}df[7];
int cmp(node c,node d)
{
    if(c.jiao != d.jiao)
    return c.jiao < d.jiao;
    else if(c.x == d.x && c.jiao == d.jiao)
        return c.y < c.y;
    else
    {
        return c.x < d.x;
    }
}
int main()
{
    int t;
    int i,j,h,s;
    char g;
    double temp;        
    scanf("%d",&t);
    while(t--)
    {
        for(i = 0; i < 5; i++)
        {
            scanf("%d%c%d",&df[i].x,&g,&df[i].y);    
            h = df[i].x;
            s = df[i].y;
            if(h > 12)
            h -= 12;
            temp =abs( ( h + 1.0*s/60 )*30 - s*6.0 );
            if(temp > 180)
            {
                temp = 360 - temp;    
            }
            df[i].jiao = temp;
        }
            
        sort(df,df+5,cmp);
        printf("%02d:%02d\n",df[2].x,df[2].y);
    
        
    }
}