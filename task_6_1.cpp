/*#include <iostream>
using namespace std;

class rational
{
private:
	int num;
	int den;
public:
	rational(int n = 0, int d = 1):
		num(n)
	{
		if(d)
			den = d;
		else 
			throw "The denominator is 0";
	}
	operator double() const
	{
		return double(num)/den;
	}
};

int main()
{
	rational r(1, 3);
	double x = r;
	cout<<r<<endl;
	return 0;
}*/