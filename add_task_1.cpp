/*#include <iostream>
using namespace std;

void set(int* a, int n, int x)
{
	for(int* p = a; p < a+n; p++)
	{
		*p = x;
	}
}

void copy(int* b, const int* a, int n)
{
	int *q = b;
	for(const int* p = a; p < a+n; p++)
	{
		*q = *p;
		q++;
	}
}

int main()
{
	int a[10];
	set(a, 10, 999); 
	int b[10];
	copy(b, a, 10);
	return 0;
}*/