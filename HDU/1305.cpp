#include <stdio.h>
#include <string.h>

struct node{
	bool isWord;
	node * next[2];
	node()
	{
		next[0] = next[1] = NULL;
		isWord = false;
	}
}* root;

bool insert(char *s)
{
	if(root == NULL)
		root = new node();
	node *x = root;
	for(int i = 0; i < strlen(s); ++ i)
	{
		if(x->isWord == true)
			return true;
		else if(x->next[s[i] - '0'] == NULL)
			x->next[s[i] - '0'] = new node();
		x = x->next[s[i] - '0'];
	}
	x->isWord = true;
	return false;
}

int main()
{
	char s[10];
	int t = 0;
	bool flag = false;
	while(~scanf("%s", s))
	{
		if(s[0] == '9')
		{
			++ t;
			if(flag)
				printf("Set %d is not immediately decodable\n", t);
			else
				printf("Set %d is immediately decodable\n", t);
			root = NULL;
			flag = false;
		}
		else
			if(!flag)
				flag = insert(s);
	}
	return 0;
}