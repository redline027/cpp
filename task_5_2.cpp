/*#include <iostream>
using namespace std;

struct node
{
	int val;
	node* left;
	node* right;
	node():
		val(0), left(nullptr), right(nullptr)
	{}
	node(int val_, node* left_, node* right_):
		val(val_), left(left_), right(right_)
	{}
};

class tree
{
private:
	void print(const node* p, int n)
	{
		if(!p)
			return;
		print(p->right, n+1);
		for(int i = 0; i < n; i++)
		{
			cout<<"   ";
		}
		cout<<p->val<<endl;
		print(p->left, n+1);
	}
	void add(node* &p, int x)
	{
		if(!p)
		{
			p = new node(x, nullptr, nullptr);
			return;
		}
		if(x == p->val)
			throw "Error";
		else if(x > p->val)
			add(p->right, x);
		else 
			add(p->left, x);
	}
	void destr(node* &p)
	{
		if(!p)
			return;
		destr(p->left);
		destr(p->right);
		delete p;
	}
public:
	node* root;
	tree(int x = 0):
		root(new node(x, nullptr, nullptr))
	{}
	void print()
	{
		print(root, 0);
	}
	void add(int x)
	{
		add(root, x);
	}
	~tree()
	{
		destr(root);
	}
};

int main()
{
	int x;
	cin>>x;
	tree t(x);
	for(;;)
	{
		if(x == 0)
			break;
		cin>>x;
		t.add(x);
	}
	t.print();
	return 0;
}*/