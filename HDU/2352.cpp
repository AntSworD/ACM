#include <iostream>
int main()
{
	int a[30],t;
	char s[10000];
    a['I' - 'A'] = 1;
    a['V' - 'A'] = 5;
    a['X' - 'A'] = 10;
    a['L' - 'A'] = 50;
    a['C' - 'A'] = 100;
    a['D' - 'A'] = 500;
    a['M' - 'A'] = 1000;
	scanf("%d",&t);
    while(t--)
    {
		getchar();
		scanf("%s",s);
        int sum = 0,i;
        for (i = 0; i < strlen(s) - 1; i++)
        {
            if (a[s[i] - 'A'] < a[s[i + 1] - 'A'])
                sum += -(a[s[i] - 'A']);
            else
                sum += a[s[i] - 'A'];
        }
        sum += a[s[strlen(s) - 1] - 'A'];
		printf("%d\n",sum);
    }
    return 0;
}
