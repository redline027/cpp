/*#include <iostream>
using namespace std;

struct elem
{
	int val;
	elem* next;
	elem(int x = 0, elem* n = nullptr):
		val(x), next(n)
	{}
};

class list
{
private:
	elem* last;

public:
	elem* first;
	
	list():
		first(nullptr), last(nullptr)
	{}
	void add(int x)
	{
		if(!first)
		{
			first = new elem(x, nullptr);
			last = first;
		} else
		{
			last -> next = new elem(x, nullptr);
			last = last -> next;
		}
	}
	void print()
	{
		for(elem* p = first; p != nullptr; p = p -> next)
		{
			cout<<p->val<<" ";
		}
	}
	void addn(int n, int x)		//task 1
	{
		if(n < 0)
			return;
		elem* p = first;
		for(int i = 0; i < n; i++)
		{
			if(!p)
				return;
			p = p -> next;
		}
		elem* q = new elem(x, p -> next);
		p -> next = q;
		if(p == last)
			last = q;
		
	}
	elem* getlast()		//task 2
	{
		return last;
	}
	void inverse()		//task 4
	{
		elem* a = first;
		elem* b = first -> next;
		elem* c = first -> next -> next;
		swap(first, last);
		last -> next = nullptr;
		for(;;)
		{
			b -> next = a;
			if(!c)
				break;
			a = b;
			b = c;
			c = c -> next;
		}
	}
	~list()
	{
		elem* p = first;
		while (!p)
		{
			elem* q = p;
			p = p -> next;
			delete q;
		}
	}
};

void inversecopy(list& l, list m)		//task 3
{
	if(!l.first)
		if(m.first)
		{
			l.add(m.first -> val);
			for(elem* p = m.first -> next; p != nullptr; p = p -> next)
			{
				elem* q = new elem(p -> val, l.first);
				l.first = q;
			}
		}
		else throw "Second list shouldn't be empty.";
	else throw "First list should be empty.";
}

int main()
{
	list l;
	for(int i = 0; i < 6; i++)
	{
		l.add(i);
	}
	l.addn(5, 7);
	l.getlast() -> val *= l.getlast() -> val;
	list m;
	inversecopy(m, l);
	m.add(13);

	l.print();
	cout<<endl;
	m.print();
	cout<<endl;

	l.inverse();
	l.add(17);
	l.print();
	return 0;
}*/