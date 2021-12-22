#include<iostream>
#include<string>
#include<cstring>


using namespace std;

int main() {
    //중요! 입력시에 엔터를 치는 것이 아닌 ab이렇게해야 한번에 들어감
    int c,d;
	cin.putback('1'); //입력
    //cin.putback('2');
    cout << "input num :";
    cin >> c;
    cout << endl;

    //cin.putback('2'); //2회이상의 putback시  cin이 씹힘
    cout << "input num:";
    cin >> d;
    cout << endl;
   

	cout << "c is " << c << "\n"; // 입력값 출력
    cout << "d is " << d << "\n"; // 입력값 출력

    
}
