#include <iostream>
using namespace std;

int main()
{
	int a[10] = {1,2,3,4,5,6};
	int* max = a;
	int* p = a;
	for(int* p = a; p < a+10; p++)
	{
		if(*p > *max)
		{
			max = p;
		}
	}
	*max = 0;
	return 0;
}