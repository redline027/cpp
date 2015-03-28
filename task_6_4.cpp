/*#define _CRT_SECURE_NO_WARNINGS
#include <iostream>

class string
{
private:
	char* p;
	int len;
public:
	string(const char* s = "")
	{
		len = strlen(s);
		p = new char[len+1];
		strcpy(p, s);
	}

	~string()
	{
		delete[] p;
	}

	string& operator= (const string& from)
	{
		len = from.len;
		char* p1 = new char[len+1];
		strcpy(p1, from.p);
		delete[] p;
		p = p1;
		return *this;
	}

	string(const string& from) :
		len(from.len)
	{
		p = new char[len + 1];
		strcpy(p, from.p);
	}

	string& operator+= (const string& s)
	{
		char* p1 = new char[len+s.len+1];
		strcpy(p1, p);
		strcpy(p1+len, s.p);
		delete[] p;
		p = p1;
		len += s.len;
		return *this;
	}

	void print()
	{
		for(int i = 0; i<len; i++)
			std::cout<<p[i];
	}
};

int main()
{
	string s1("abc"), s2("klm");
	s1 += s2;
	s1.print(); 
	std::cout<<std::endl;
	return 0;
}*/