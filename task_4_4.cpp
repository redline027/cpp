/*#include <iostream>
using namespace std;

class time
{
private:
	int hour;
	int min;
public:
	time():
		hour(12), min(0)
	{};
	time(int h, int m)
	{
		if(h > -1 && h < 24 && m > -1 && m < 61)
		{
			hour = h;
			min = m;
		}
		else
			throw "Wrong time!";
	};
};

int main()
{
	try{
		time t;
		time t1(25, 9);
	} catch (const char* s){
		cout<<s<<endl;
	} catch (...){
		cout<<"Error"<<endl;
	};
	
	return 0;
}*/