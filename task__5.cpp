#include <iostream>
using namespace std;

class stack
{
private:
	int n;		//размер динамического массива
	int* st;	//сам массив
	int p;		//номер текущего элемента
	int prod;	//произведение без нулей
	int count;	//количество нулей
	void overflow();
public:
	stack();
	void push(int x);
	int pop();
	int product();
};

stack::stack():
	n(10), st(new int[10]), p(-1), prod(1), count(0)
{}

void stack::push(int x)
{
	if(p == n-1)
		overflow();
	p++;
	st[p] = x;
	if(x == 0)
		count++;
	else
		prod *= x;
}

int stack::pop()
{
	if(p == -1)
		throw "Error";
	if(st[p] == 0)
		count--;
	else
		prod /= st[p];
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

int stack::product()
{
	if(p == -1)
		throw "Error";
	if(count == 0)
		return prod;
	else
		return 0;
}

int main()
{
	stack s;
	s.push(5);
	s.push(4);
	s.push(3);
	s.push(0);
	cout<<s.product()<<endl;
	cout<<s.pop()<<endl;
	cout<<s.product()<<endl;
	return 0;
}