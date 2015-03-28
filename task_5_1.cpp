/*#include <iostream>
using namespace std;

class complex 
{
private:
    double re, im;
public:
	complex(double re_ = 0, double im_ = 0) :
		re(re_), im(im_)
	{}
	friend complex operator *(complex c1, complex c2);
	complex& operator *=(complex c)
	{
		*this = *this*c;
		return *this;
	}
};

complex operator *(complex c1, complex c2)
{
	return complex(c1.re*c2.re - c1.im*c2.im, c1.re*c2.im + c2.re*c1.im);
};

int main()
{
	return 0;
}*/