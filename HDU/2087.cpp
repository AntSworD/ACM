#include <stdio.h>
#include <string.h>

int main()
{
    int len, t;
    char a[1001], b[1001],*p;
    while (scanf("%s", a), a[0] != '#')
    {
        scanf("%s", b);
        len = strlen(b);
        for (t = 0, p = a; p = strstr(p, b); t++,p += len);
        printf("%d\n", t);
    }
    return 0;
}
