/*#include <iostream>
using namespace std;

struct list
{
	int val;
	list* next;
	list():
		val(0), next(nullptr)
	{};
	list(int val_, list* next_):
		val(val_), next(next_)
	{};
};

int main()
{
	int n;
	cout<<"n:"<<endl;
	cin>>n;
	list* first = new list(1, nullptr);
	for(int i = 2; i < n+1; i++)
	{
		list* p = new list(i, first);
		first = p;
	};
	list* p = first;
	while(p != nullptr)
	{
		list* q = p;
		cout<<p->val<<" ";
		p = p->next;
		delete q;
	};
	return 0;
}*/