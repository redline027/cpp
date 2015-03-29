#include <iostream>
using namespace std;

int main()
{
	int a[10][10] = {{1,2,3}, {9}, {1,1,1,1,1,1,1,1}};
	int* b[10];
	int sum[10];
	for(int i = 0; i < 10; i++)
	{
		b[i] = a[i];
		int s = 0;
		for(int j = 0; j < 10; j++)
		{
			s += a[i][j];
		}
		sum[i] = s;
	}
	for(int i = 0; i < 9; i++)
	{
		for(int j = 0; j < 9-i; j++)
		{
			if(sum[i] < sum[i+1])
			{
				swap(sum[i],sum[i+1]);
				swap(b[i],b[i+1]);
			}
		}
	}
	return 0;
}