#include <iostream>
using namespace std;
void twice(int *p)
{
	*p *= 2;
}
int main5()
{
	int i =5;
	twice(&i);
	cout<<i<<endl;
	return 0;
}