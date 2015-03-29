#include <iostream>
using namespace std;

struct point
{
	double x;
	double y;
	point():
		x(0), y(0)
	{};
	point(double x_, double y_): 
		x(x_), y(y_) 
	{};
};

class romb
{
protected:
	point center;
	double h, v;	// половины диагоналей, параллельных осям
public:
	romb():
		center(), h(1), v(1)
	{};
	romb(point c, double h_, double v_):
		center(c), h(h_), v(v_) 
	{};
	virtual void draw()
	{
		cout<<"Romb:"<<endl;
		cout<<"("<<center.x<<","<<center.y+h<<")"<<endl;
		cout<<"("<<center.x+v<<","<<center.y<<")"<<endl;
		cout<<"("<<center.x<<","<<center.y-h<<")"<<endl;
		cout<<"("<<center.x-v<<","<<center.y<<")"<<endl;
	};
};

class romb_with_interior_point : public romb
{
private:
	point in; // некая точка внутри ромба
public:
	romb_with_interior_point():
		romb(), in()
	{};
	romb_with_interior_point(point c, double h_, double v_, point in_):
		romb(c, h_, v_)
	{
		if(in_.x > center.x - h && in_.x < center.x + h && in_.y < center.y + v && in_.y > center.y - v)
		{
			in = in_;
		}
		else
			throw "Point isn't inside";
	};
	void draw()
	{
		romb::draw();
		cout<<"Interior point:"<<endl;
		cout<<"("<<in.x<<","<<in.y<<")"<<endl;
	};
};

int main()
{
	romb A;
	romb_with_interior_point B;
	A.draw();
	B.draw();
	return 0;
}