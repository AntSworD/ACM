#include <stdio.h>
#include <string.h>

int dir[4][2] = {10, 0, 0, -10, -10, 0, 0, 10};

int main()
{
	char s[201];
	while(~scanf("%s", s))
	{
		printf("300 420 moveto\n310 420 lineto\n");
		int x = 310, y = 420;
		int flag = 0;
		for(int i = 0; s[i]; ++ i)
		{
			if(s[i] == 'A')
				flag ++;
			else
				flag --;
			while(flag < 0)
				flag += 4;
			flag %= 4;
			x += dir[flag][0];
			y += dir[flag][1];
			printf("%d %d lineto\n", x, y);
		}
		printf("stroke\nshowpage\n");
	}
	return 0;
}