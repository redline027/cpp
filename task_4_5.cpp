/*#include <iostream>
using namespace std;

class stack
{
private:
	int n;		//������ ������������� �������
	int* st;	//��� ������
	int p;		//����� �������� ��������
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
	int* p = new int[1000];		 // � ���, ��������, �� ���-�� ������ � p � s	   
	try{
	cout << s.pop(); 		// � � ��� ��� ���-�� ������ � p � s  
	} catch(...){
		delete [] p;
		throw;
	}
	delete [] p;
	// ������������� ������ ������: delete ����� � �� ���������!
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