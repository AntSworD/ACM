#include <iostream>
#include <stdio.h>
#include <string>
using namespace std;

struct bstNode{
	char data;
	bstNode *left, *right;
	bstNode()
	{
		data = 0;
		left = right = NULL;
	}
};

class Bst{
private:
	bstNode * root;
	void pre(bstNode *, string &);
	void ord(bstNode *, string &);
	void Insert(char);

public:
	Bst()
	{
		root = NULL;
	}
	void buildbst(char *);
	bool operator == (Bst b);
};

void Bst::buildbst(char *s)
{
	for(int i = 0; i < strlen(s); ++ i)
		Insert(s[i]);
}

void Bst::pre(bstNode *x, string &s)
{
	if(x == NULL)
		return ;
	s += x->data;
	pre(x->left, s);
	pre(x->right, s);
}

void Bst::ord(bstNode *x, string &s)
{
	if(x == NULL)
		return ;
	ord(x->left, s);
	s += x->data;
	ord(x->right, s);
}

bool Bst::operator == (Bst b)
{
	string s1, s2;
	pre(root, s1);
	pre(b.root, s2);
	if(s1 != s2) 
		return false;
	ord(root, s1);
	ord(b.root, s2);
	if(s1 != s2)
		return false;
	return true;
}

void Bst::Insert(char z)
{
	bstNode *y = NULL;
	bstNode *x = root;
	while(x != NULL)
	{
		y = x;
		if(x->data > z)
			x = x->left;
		else
			x = x->right;
	}
	if(y == NULL)
	{
		root = new bstNode();
		root->data = z;
	}
	else if(z > y->data)
	{
		y->right = new bstNode();
		y->right->data = z;
	}
	else
	{
		y->left = new bstNode();
		y->left->data = z;
	}
}

int main()
{
	int n;
	while(scanf("%d", &n) && n != 0)
	{
		char s[11];
		scanf("%s", s);
		Bst T;
		T.buildbst(s);
		for(int i = 0; i < n; ++ i)
		{
			scanf("%s", s);
			Bst t;
			t.buildbst(s);
			if(T == t)
				printf("YES\n");
			else
				printf("NO\n");
		}
	}
	return 0;
}