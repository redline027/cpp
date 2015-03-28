/*#include <iostream>
using namespace std;
int main7()
{
	int* a[10];
	for(int i = 1; i<=10; i++)
	{
		a[i-1] = new int[i];
		for(int j = 0; j<i-1; j++)
		{
			a[i-1][j]=0;
		}
		a[i-1][i-1]=1;
	}
	for(int i = 0; i<10; i++)
	{
		for(int j = 0; j<i+1; j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}
	for(int i = 0; i<10; i++)
		delete [] a[i];
	return 0;
}*/