#include <iostream>
#include <string>
using namespace std;

void firstLastSpace(int& first, int& last, const string& str)
{
	int a = first;
	first = -1;
	for(int i = 0; str[i] != '\0'; i++)
	{
		if(str[i] == ' ')
		{
			if(first == -1)
				first = i;
			last = i;
		}
	}
	if(first == -1)
		first = a;
}

int main()
{
	string s("a b c c");
	int first, last;
	firstLastSpace(first, last, s);
	cout<<first<<' '<<last<<endl;
	return 0;
}