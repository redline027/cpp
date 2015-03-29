#include <iostream>
using namespace std;

class stack
{
private:
	int n;		//размер динамического массива
	int* st;	//сам массив
	int p;		//номер текущего элемента
	void overflow();
public:
	stack();
	void push(int x);
	int pop();
};

stack::stack():
	n(10), st(new int[10]), p(-1)
{}

void stack::push(int x)
{
	if(p == n-1)
		overflow();
	p++;
	st[p] = x;
}

int stack::pop()
{
	if(p == -1)
		throw "Error";
	p--;
	return st[p+1];
}

void stack::overflow()
{
	int* a = new int[2*n];
	for(int i = 0; i<n; i++)
		a[i] = st[i];
	delete [] st;
	st = a;
	n *= 2;
}

int main()
{
	stack s;
	s.push(5);
	s.push(4);
	s.push(3);
	cout<<s.pop()<<endl;
	return 0;
}