#include <iostream>
using namespace std;

istream& prompt(istream& is)
{
	cout << "��ȣ��?";
	return is;
}
int main() {
	int ch;
	 // ���� ������ �ִ� 99���� ���ڷ� �Էµȴٰ� ����
	while ((ch = cin.get()) != EOF) {
		

		if (ch == ';') {
			cin.ignore(100, '\n'); // ���� ������ �ִ� 99���� ���ڷ� �Էµȴٰ� ����
		}
		else
		{
			cout << (char)ch;
		}
		
	}
}

