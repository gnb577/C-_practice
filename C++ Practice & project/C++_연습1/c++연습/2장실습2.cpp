#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string password;
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while (true) {
		cout << "��ȣ>>";
		cin >> password;
		//getline(cin, password);
		if((password == "c++"))
		{
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
		}
		

}
