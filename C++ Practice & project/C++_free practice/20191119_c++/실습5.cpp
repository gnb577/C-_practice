#include<cmath>
#include<iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	cout << showbase;
	cout << showpoint;
	// 타이틀을 출력한다.
	cout << setw(15) << "Number";
	cout << setw(15) << "Square";
	cout << setw(15) << "Square Root" << endl;

	// 하나의 수를 십진수, 8진수, 16진수 형태로 한 줄에 출력한다.
	//for (int i = 0; i < 50; i += 5) {
	//	cout << setw(15) << setfill('.') << dec << i; // 10진수
	//	cout << setw(15) << setfill('.') << dec << i*i; // 8진수
	//	cout << setw(15) << setfill('.') << dec << sqrt(i) << endl; // 16진수
	//}
	for (int i = 0; i < 50; i += 5) {
		cout << setw(15) << setfill('.') << left <<dec << i ; // 10진수
		cout << setw(15) << setfill('.') << left << dec << i * i; // 8진수
		cout << setw(15) << setfill('.') << left << dec << setprecision(3) << sqrt(i)  <<  endl; // 16진수
	}
}
