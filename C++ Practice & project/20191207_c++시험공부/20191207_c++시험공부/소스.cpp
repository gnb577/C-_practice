#include <iostream>
using namespace std;

void get1()
{
	int ch;
	while ((ch = cin.get()) != EOF)
	{
		cout.put(ch);
		if (ch == '\n')
		{
			break;
		}
	}
}

void get2()
{
	char ch;
	while (true)
	{
		cin.get(ch);
		if (cin.eof()) break; // EOF를 만나면 읽기 종료
		cout.put(ch); // ch의 문자 출력
		if (ch == '\n')
			break; // <Enter> 키가 입력되면 읽기 중단

	}
}

int main()
{
	get1();
	get2();
}