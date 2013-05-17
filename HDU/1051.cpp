#include <iostream>
#include <cstdio>
#include <cstring>
#include <algorithm>
using namespace std;

struct node{
    int l, w;
};

int cmp(const void *a, const void *b)
{
    if((*(node *)a).l == (*(node*)b).l)
        return (*(node *)a).w - (*(node*)b).w;
    return (*(node *)a).l - (*(node*)b).l;
}


int main()
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        int n;
        node a[5001];
        bool flag[5001];
        memset(flag, false, sizeof(flag));

        scanf("%d", &n);
        for(int i = 0; i < n; ++ i)
            scanf("%d %d", &a[i].l, &a[i].w);
        qsort(a, n, sizeof(a[0]), cmp);

        int ans = 0;
        for(int i = 0; i < n; ++ i)
        {
            if(flag[i])
                continue;
            ans ++;
            flag[i] = true;
            for(int j = i + 1, k = i; j < n; ++ j)
            {
                if(!flag[j] && a[j].l >= a[k].l && a[j].w >= a[k].w)
                {
                    k = j;
                    flag[j] = true;
                }
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}