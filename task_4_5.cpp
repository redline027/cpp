/*#include <iostream>
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

void f(stack& s)
{   
	int* p = new int[1000];		 // … тут, допустим, мы что-то делаем с p и s	   
	try{
	cout << s.pop(); 		// … а тут еще что-то делаем с p и s  
	} catch(...){
		delete [] p;
		throw;
	}
	delete [] p;
	// Потенциальная утечка памяти: delete может и не вызваться!
}

int main()
{
	stack s;
	try{
	f(s);
	}catch(char* s){
		cout<<s<<endl;
	};
	return 0;
}*/