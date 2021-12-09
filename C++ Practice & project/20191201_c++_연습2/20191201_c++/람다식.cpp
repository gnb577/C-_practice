#include <iostream>  
#include <string>  
  
using namespace std;

int main()
{
	auto love = [](string a, string b) {
		cout << a << " " << b;
	};
	love("ÇÏ³ª", "¼Â");

	double pi = 3.14;
	auto circle = [pi](int r)
	{
		cout << pi* r * r << endl; 
	};
	circle(3);
	
	double sum = 0;
	auto circle2 = [&sum](int a,int b)->double
	{
		sum = a + b;
		return sum;
	};
	circle(3);
	circle2(3,5);
	cout << sum;
	return 0;
}