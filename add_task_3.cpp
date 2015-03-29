#include <iostream>
using namespace std;

int main()
{
	int a[10] = {3,5,7,9,11,13};
	bool f = false;
	for(int* p = a; p < a+9; p++)
	{
		for(int* q = p+1; q < a+10; q++)
		{
			if(abs(*p-*q) == 1)
			{
				f = true;
				break;
			}
		}
		if(f)
		{
			cout<<"yes"<<endl;
			break;
		}
	}
	if(!f)
	{
		cout<<"no"<<endl;
	}
	return 0;
}