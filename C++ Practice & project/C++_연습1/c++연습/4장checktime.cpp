#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main() {

string a("Hello C++");
cout << a.length() << endl;
a.append("!!");
cout << a << endl;
cout << a.at(6) << endl;// C�� 7��°(a[6]�ϱ� c��ã�Ƴ�
	cout << a.find("C") << endl; //ó������ a���� c�� ������ index = 7
	int n = a.find("++");
cout << n << endl;
a.erase(1, 3);// index1~3 �� ���ڿ��� 2��°���� 4��°�� ����
cout << a << endl;
};

