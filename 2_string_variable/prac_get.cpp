#include<iostream>
#include<string>
#include<cstring>


using namespace std;

int main() {
	cout << "input char : ";

    //중요! 입력시에 엔터를 치는 것이 아닌 ab이렇게해야 한번에 들어감
    char c,d;
	c = cin.get(); //입력
    d = cin.get(); //입력
   

	cout << c << "\n"; // 입력값 출력
    cout << d << "\n"; // 입력값 출력
    cout << c << d;
    
}
