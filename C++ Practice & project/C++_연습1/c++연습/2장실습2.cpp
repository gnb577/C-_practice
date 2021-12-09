#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main()
{
	string password;
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while (true) {
		cout << "암호>>";
		cin >> password;
		//getline(cin, password);
		if((password == "c++"))
		{
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
		}
		

}
