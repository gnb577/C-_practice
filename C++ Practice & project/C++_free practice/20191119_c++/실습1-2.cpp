#include <iostream>
using namespace std;

int main()
{
	int ch;
	while ((ch = cin.get()) != EOF) 
	{
		if (ch == ';')
		{
			cin.ignore(100, '\n'); // 영어 문장이 최대 99개의 문자로 입력된다고 가정
			cout << endl;
		}
		cout << (char)ch;
	}
	//  완성하기

}


