#include<iostream>
using namespace std;

template<class T>
bool equalarray(T a, T b,int c)
{
	for (int i = 0; i < c; i++)
	{
		if (a[i] != b[i])
		{
			return false;
		}
	}
	return true;
}

int main()
{
	int x[] = { 1,2,3,4,4 };
	int y[] = { 1,2,3,4,5 };
	if (equalarray(x, y, 5))cout << "같다";
	else cout << "아니다";

	double a[] = { 1.1,2.2,3.3,4.4,5.5 };
	double b[] = { 1.1,2.2,3.3,4.4,5.5 };
	if (equalarray(a, b, 5))cout << "같다";
	else cout << "아니다";
}