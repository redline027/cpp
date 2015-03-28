/*#include <iostream>
#include <deque>
using namespace std;

class time
{
protected:
	int hour;
	int min;

public:
	time(int h = 12, int m = 0):
		hour(h), min(m)
	{}
	virtual void print() const
	{
		cout<<hour<<":"<<min;
	}
};

class time_with_sec : public time
{
private:
	int sec;
public:
	time_with_sec(int h = 12, int m = 0, int s = 0):
		time(h, m), sec(s)
	{}
	void print() const override
	{
		time::print();
		cout<<"."<<sec;
	}
};

class timeCollection
{
private:
	deque<time*> collection;
public:
	void add(time* p)
	{
		collection.push_back(p);
	}
	void print() const
	{
		for(int i = 0; i < collection.size(); i++)
		{
			collection.at(i)->print();
			cout<<" ";
		}
	}
};

int main()
{
	timeCollection tc;	// tc Ц набор данных о времени
	tc.add(new time(8, 30));
	tc.add(new time_with_sec(10, 00, 15));
	tc.add(new time(12, 10));
	tc.print();	
	return 0;
}*/