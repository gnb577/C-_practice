#include <iostream>
//#include <cstring>
#include<string>
using namespace std;

int main() {
	string password;
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while (true) {
		cout << "��ȣ>>";
		cin >> password;
		if (password == "C++")  //strcmp ���Ұ� string���� ���� cstring���� ����� �־ ��� �Ұ�
		{
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
	}
	return 0;
}
