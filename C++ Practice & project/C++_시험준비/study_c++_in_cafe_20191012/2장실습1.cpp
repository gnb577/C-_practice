/*

1. c++��Ÿ�Ϸ� ��ȯ

#include <stdio.h>
int sum(); // �Լ� ���� ����

int main() {
	int n = 0;

	printf("�� ���� �Է��ϼ���>");
	scanf("%d", &n);
	printf("1���� %d������ ���� %d �Դϴ�.\n", n, sum(1, n));
	return 0;
}

int sum(int a, int b) {
	int k, res = 0;
	for (k = a; k <= b; k++) {
		res += k;
	}
	return res;
}


*/
/*
#include<iostream>
using namespace std;

int sum(int a,int b);

int main()
{
	int n(0);
	cout << "�� ���� �Է��ϼ���" << endl;
	cin >> n;
	cout << "1���� " << n << "������ ���� " << sum(1, n) << "�Դϴ�";
	return 0;

}

int sum(int a, int b)
{
	int i = 0;
	int result = 0;
	for (i = a; i <= b; i++)
	{
		result = result + i;
	}
	return result;
}

*/

/*

#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char password[11];
	cout << "���α׷��� �����Ϸ��� ��ȣ�� �Է��ϼ���." << endl;
	while(true) {
		cout << "��ȣ>>";
		cin >> password;
		if(strcmp(password, "C++") == 0) {
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
	}
}

*/

#include <iostream>
#include <cstring>
#include<string>
using namespace std;

int main()
{
	string password;
	
	while (1)
	{
		cin >> password;
		if (password == "c++")
		{
			cout << "���α׷��� ���� �����մϴ�." << endl;
			break;
		}
		else
			cout << "��ȣ�� Ʋ���ϴ�~~" << endl;
		cin.ignore();
	}
}