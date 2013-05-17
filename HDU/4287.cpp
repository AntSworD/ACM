#include <iostream>
#include <cstdio>
#include <cstring>
using namespace std;

#define Max 5001
int res[Max];
int n, m;

char dir[10] = { 'a', 'a', 'a', 'd', 'g', 'j',' m', 'p', 't', 'w'};

int find(char c)
{
	for(int i = 9; i >= 2; --i)
		if(c >= dir[i])
			return i;
}

void find_num(char *c)
{
	int i = 0;
	while(c[i])
	{
		c[i] = find(c[i]) + '0';
		i ++;
	}
}

struct node{
	int isWord;
	node *next[10];
	node()
	{
		isWord = -1;
		for(int i = 0; i < 10; ++ i)
			next[i] = NULL;
	}
};

class Trie
{
private:
	node *root;
public:
	Trie()
	{
		root = NULL;
	}
	
	void insert(char *a, int k)
	{
		if(!root)
			root = new node;
		node *now = root;
		int str_len = strlen(a);
		for(int i = 0; i < str_len; ++ i)
		{
			int order = a[i] - '0';
			if(!now->next[order])
				now->next[order] = new node;
			now = now->next[order];
		}
		now->isWord = k;
	}

	int search(char *a)
	{
		node *now = root;
		int str_len = strlen(a);
		for(int i = 0; i < str_len; ++ i)
		{
			int order = a[i] - '0';
			if(!now->next[order])
				return -1;
			now = now->next[order];
		}
		return now->isWord;
	}
};

int main()
{
	int t = 0;
	scanf("%d", &t);
	while(t--)
	{
		memset(res, 0, sizeof(res));
		Trie T;
		scanf("%d %d", &n, &m);
		for(int i = 0; i < n; ++ i)
		{
			char c[7];
			scanf("%s", c);
			T.insert(c, i);
		}
		for(int i = 0; i < m; ++ i)
		{
			char c[30];
			scanf("%s", c);
			find_num(c);
			int tmp = T.search(c);
			if(tmp != -1)
				++res[tmp];
		}
		for(int i = 0; i < n; ++ i)
			printf("%d\n", res[i]);
	}
	return 0;
}