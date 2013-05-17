#include<iostream>
#include<set>
#include<string>
#include<iterator>
using namespace std;


int main()
{
    int n;
    while(cin>>n, n)
    {
        int num=0;
        int x=1;
        int y=n;
        while(n)
        {
            int t=n%10;
            if(t>3)
                t--;
            if( t>=8 )
                t--;
            num += t*x;
            x *= 8;
            n /= 10;
        }
        printf("%d: %d\n", y, num);
    }
    return 0;
}