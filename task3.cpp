#include <iostream>
using namespace std;

void order(int &x, int &y, int &z)
{
	int max = x;
	int min = x;
	if(max < y) max = y;
	else min = y;
	if(max < z) max = z;
	if(min > z) min = z;
	y = x+y+z-max-min;
	x = min;
	z = max;
}

int main6()
{
	int x = 3;
	int y = 2;
	int z = 2;
	order(x,y,z);
	cout<<x<<y<<z<<endl;
	return 0;
}