#include <iostream>
using namespace std;
int main2()
{
	int res = 1;
	int n = 1;
	cout<<"Enter numbers:"<<endl;
	do
	{
		res *= n;
		cin>>n;
	} while (n != 0);
	cout<<res<<endl;
	return 0;			 
}