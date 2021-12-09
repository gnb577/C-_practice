#include<iostream>
#include<cstdlib>
#include<string>
#include<math.h>
#include<iomanip>

using namespace std;
int main()
{
	cout << left;
	cout << setw(15);
	cout << "NUMBER" << setw(15)<< "SQUARE" << setw(15)<<"SQUARE ROOT" << endl;
	cout.precision(3);
	for (int i = 0; i < 10; i++)
	{
		
		cout << setw(15) << setfill('_')<<i*5;
		cout << setw(15) <<  setfill('_') << (i*5)*(i*5) ;
		cout << setw(15) << setfill('_') << sqrt(i * 5);
		cout << endl;
	}
	
}