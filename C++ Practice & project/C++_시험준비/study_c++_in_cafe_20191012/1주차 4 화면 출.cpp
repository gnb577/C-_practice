#include<iostream>
using namespace std;
double area(int r);

int main()
{
	int n = 3;
	cout << area(n) << endl;
}

double area(int r)
{
	return 3.14 * r * r;
}