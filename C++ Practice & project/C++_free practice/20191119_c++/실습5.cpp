#include<cmath>
#include<iostream>
#include <iomanip>
#include <string>

using namespace std;

int main() {
	cout << showbase;
	cout << showpoint;
	// Ÿ��Ʋ�� ����Ѵ�.
	cout << setw(15) << "Number";
	cout << setw(15) << "Square";
	cout << setw(15) << "Square Root" << endl;

	// �ϳ��� ���� ������, 8����, 16���� ���·� �� �ٿ� ����Ѵ�.
	//for (int i = 0; i < 50; i += 5) {
	//	cout << setw(15) << setfill('.') << dec << i; // 10����
	//	cout << setw(15) << setfill('.') << dec << i*i; // 8����
	//	cout << setw(15) << setfill('.') << dec << sqrt(i) << endl; // 16����
	//}
	for (int i = 0; i < 50; i += 5) {
		cout << setw(15) << setfill('.') << left <<dec << i ; // 10����
		cout << setw(15) << setfill('.') << left << dec << i * i; // 8����
		cout << setw(15) << setfill('.') << left << dec << setprecision(3) << sqrt(i)  <<  endl; // 16����
	}
}
