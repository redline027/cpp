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
	void find_even(const node* p)
	{
		if(!p)
			return;
		if(p -> val % 2 == 0)
			throw "We found!";
		find_even(p -> left);
		find_even(p -> right);
	}
public:
	node* root;
	tree():
		root(nullptr)
	{}
	void print()
	{
		print(root, 0);
	}
	void add(int x)
	{
		add(root, x);
	}
	bool find_even()
	{
		bool f = false;
		try{
			find_even(root);
		} catch(...){
			f = true;
		}
		return f;
	}
	~tree()
	{
		destr(root);
	}
};

int main()
{
	tree t;
	t.add(1);
	t.add(3);
	t.add(-3);
	t.add(2);
	t.print();
	cout<<(t.find_even() ? "True" : "False")<< endl;
	return 0;
}*/