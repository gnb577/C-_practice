#include <iostream>
#include<string>
using namespace std;

//int n=0 �� int n ���� n=0�� �ٸ���.
//<<endl �� \n�� ����
//�⺻������ bool, char, short, int, long, float, double Ÿ���� ���� ��Ÿ�� �� �־� ���� ������ �� �ʿ䰡 ����
//���� ���� ǥ���ϰ� ���� ��찡 ����� ex)10.5 (int)10.5�̷������� ���� 10�̷��� ����
//cout = printf , cin = scanf
//int char ó�� auto��� ������ Ÿ���� �ִ� �� ���� ���� �ſ� ���߾� �ڵ����� ���߾���
//namespace std;�̷��� ���ִ� ������ c++�� ���������� ������ ������ �����
//�Ѹ���� � ���� �����ϰ� ������ mallocó�� �̸��� �ִ� ������ ������ �� ���α׷��� �ۼ��ؾ� ��

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
