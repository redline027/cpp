#include <iostream>
#include <cmath>
using namespace std;
int main3()
{
	int n;
	cout<<"Enter n:"<<endl;
	cin >> n;
	double res = 0;
	for(int i = 0; i <= n; i++)
	{
		res += pow(-1,i)/((2*i+1)*(2*i+1));
	}
	cout<<res<<endl;
	return 0;			 
}
