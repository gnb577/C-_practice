#include <iostream>
#include<string>
using namespace std;
//int n=0 �� int n ���� n=0�� �ٸ���.

int sum(); // �Լ� ���� ����

int main() {
	int n{ 0 };
	cout << "�� ���� �Է��ϼ���>";
	cin >> n;
	if (n <= 0)
	{
		cout << "����� �Է��ϼ���!" << endl;
		return 0;
	}
	cout << "1����" << n << "������ ����" << sum(1, n) << "�Դϴ�." << endl;
	return 0;
}

int sum(int a, int b) {
	auto res(0);
	for (int k{ a }; k <= b; k++) {
		res += k;
	}
	return res;
}
