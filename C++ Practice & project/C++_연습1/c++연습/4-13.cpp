#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "���ڿ��� �Է��ϼ���(�ѱ� �ȵ�) " << endl;
	getline(cin, s); // ���ڿ� �Է�
	int len = s.length(); // ���ڿ��� ����
	string a = "lhateyou";
	a.append("c++");
	for (int i = 0; i < len; i++) {
		string first = s.substr(0, 2); // �� ���� ���� 1���� ���ڿ��� �и�
		string sub = s.substr(2, len - 2); // ������ ���ڵ��� ���ڿ��� �и�
		s = sub + first; // �� ���ڿ��� �����Ͽ� ���ο� ���ڿ��� ����
		cout << s << endl;
	}
	cout << a;
}
