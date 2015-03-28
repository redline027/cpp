/*#include <iostream>
using namespace std;
void revers(int *a, int size)
{
	int* p = a;
	int *q = a + size-1;
	for(int i = 0; i <= size/2; i++)
	{
		int b = *p;
		*p = *q;
		*q = b;
		p++;
		q--;
	}
}
int main8()
{
	int a[11] = {1,2,3,4,5,6,7,8,9};
	revers(a, 11);
	for(int i = 0; i<11; i++)
	{
		cout<<a[i]<<" ";
	}
	return 0;
}*/