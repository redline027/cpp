#include <iostream>
using namespace std;

const double pi = 3.14;

class shape
{
protected:
	double x, y;
public:
	shape():
		x(0), y(0)
	{};
	shape(double x_, double y_):
		x(x_), y(y_)
	{};
	virtual double area()
		=0;
	virtual double perim()
		=0;
};

class circle : public shape
{
private:
	double rad;
public:
	circle():
		shape(), rad(1)
	{};
	circle(double x_, double y_, double rad_):
		shape(x_, y_), rad(rad_)
	{};
	double area()
	{
		return pi*rad*rad;
	};
	double perim()
	{
		return 2*pi*rad;
	};
};

class rectangle : public shape
{
private:
	double x1, y1;
public:
	rectangle():
		shape(), x1(1), y1(1)
	{};
	rectangle(double x_, double y_, double x1_, double y1_):
		shape(x_, y_), x1(x1_), y1(y1_)
	{};
	double area()
	{
		return abs(x - x1) * abs(y - y1);
	};
	double perim()
	{
		return 2*abs(x - x1) + 2*abs(y - y1);
	};
};

int main()
{
	return 0;
}