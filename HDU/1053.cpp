#include <iostream>
#include <cstdio>
#include <cstring>
#include <cstdlib>
using namespace std;

int f[27], c[27], total, head;

struct node{
	string s;
	int w;
	node()
	{
		s = "";
		w = 0;
	}
	void So()
	{
		for(int i = 0; i < s.size(); ++ i)
			c[s[i] - 'A'] ++;
	}
}queue[10000];

void push(node t)
{
	int tmp = head;
	while(queue[tmp - 1].w > t.w && tmp > 0)
	{
		queue[tmp] = queue[tmp - 1];
		tmp --;
	}
	queue[tmp] = t;
	head ++;
}

node pop()
{
	node tmp = queue[total ++];
	return tmp;
}

void solve()
{
	while(1)
	{
		node t[2];
		int i;
		node tmp;
		for(i = 0; i < 2 && head > total; ++ i)
		{
			t[i] = pop();
			t[i].So();
			tmp.s += t[i].s;
			tmp.w += t[i].w;
		}
		if(i >= 2)
			push(tmp);
		else
			break;
		if(head - total == 1)
			break;
	}
}

int main()
{
	char s[1000];
	while(1)
	{
		gets(s);
		if(strcmp(s, "END") == 0)
			break;
		total = 0;
		head = 0;
		memset(f, 0, sizeof(f));
		memset(c, 0, sizeof(c));

		int cout = 0;
		for(int i = 0; s[i]; ++ i)
		{
			if(s[i] == '_')
				s[i] = 'A' + 26;
			f[s[i] - 'A'] ++;
			cout ++;
		}
		cout *= 8;

		for(int i = 0; i < 27; ++ i)
		{
			if(f[i] == 0)
				continue;
			node tmp;
			tmp.s += i + 'A';
			tmp.w = f[i];
			push(tmp);
		}

		solve();

		int ans = 0;
		for(int i = 0; i < 27; ++ i)
			ans += f[i] * c[i];

		printf("%d %d %.1lf\n", cout, ans, (double)(cout * 1.0 / ans));
	}
	return 0;
}