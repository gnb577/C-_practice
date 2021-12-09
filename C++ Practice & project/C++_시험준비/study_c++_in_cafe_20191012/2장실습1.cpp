/*

1. c++스타일로 변환

#include <stdio.h>
int sum(); // 함수 원형 선언

int main() {
	int n = 0;

	printf("끝 수를 입력하세요>");
	scanf("%d", &n);
	printf("1에서 %d까지의 합은 %d 입니다.\n", n, sum(1, n));
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
	cout << "끝 수를 입력하세요" << endl;
	cin >> n;
	cout << "1에서 " << n << "까지의 합은 " << sum(1, n) << "입니다";
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
	cout << "프로그램을 종료하려면 암호를 입력하세요." << endl;
	while(true) {
		cout << "암호>>";
		cin >> password;
		if(strcmp(password, "C++") == 0) {
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
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
			cout << "프로그램을 정상 종료합니다." << endl;
			break;
		}
		else
			cout << "암호가 틀립니다~~" << endl;
		cin.ignore();
	}
}