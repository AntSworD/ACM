#include<stdio.h>
#include<math.h>
int main()
{
    int n,a;
    scanf("%d",&n);
    while(n--)
    {
        scanf("%d",&a);
        printf("%d\n",(int)sqrt(a*1.0));
    }
    return 0;
}