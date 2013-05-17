#include<stdio.h>
#include<string.h>
int main()
{
    int t,k;
    scanf("%d",&t);
    getchar();
    for(k=0;k<t;k++)
    {
        char a[1001],s[1001];
        int i,j,sl;
        gets(a);
        sl=strlen(a);
        j=0;
        for(i=0;i<sl;i++)
        {
            if(((a[i-1]==' '&&a[i+1]!=' ')||(i==0&&a[i]!=' '))&&a[i]>=97&&a[i]<=122) 
            {
                s[j]=a[i]-32;
                j++;
            }
            else if(((a[i-1]==' '&&a[i+1]!=' ')||(i==0&&a[i]!=' '))&&a[i]>=65&&a[i]<=90)
            {
                s[j]=a[i];
                j++;
            }
        }
        for(i=0;i<j;i++) printf("%c",s[i]);
        printf("\n");
    }
    return 0;
}