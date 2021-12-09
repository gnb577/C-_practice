#include<iostream>
#include<fstream>
#include<string>
#include<algorithm>
#include<iomanip>
#include<cmath>
using namespace std;


int main()
{
	cout << setw(15) << setfill(' ')<< left<<"Number";
	cout << setw(15) << setfill(' ') << "Square";
	cout << setw(15) << setfill(' ') << "Square root";
	cout << endl;
	cout.precision(3);
	for(int i = 0; i <= 9; i++)
	{
		cout << setw(15) << setfill('.') << i * 5;
		cout << setw(15) << setfill('.') << (i * 5) * (i * 5);
		cout << setw(15) << setfill('.') << sqrt(i * 5) << endl;
	}
}
