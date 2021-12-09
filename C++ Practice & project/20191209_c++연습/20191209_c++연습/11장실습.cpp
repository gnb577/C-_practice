#include <iostream>
using namespace std;

istream& prompt(istream& is)
{
	cout << "암호는?";
	return is;
}
int main() {
	int ch;
	 // 영어 문장이 최대 99개의 문자로 입력된다고 가정
	while ((ch = cin.get()) != EOF) {
		

		if (ch == ';') {
			cin.ignore(100, '\n'); // 영어 문장이 최대 99개의 문자로 입력된다고 가정
		}
		else
		{
			cout << (char)ch;
		}
		
	}
}

