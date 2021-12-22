#include<iostream>
#include<string>
#include<cstring>


using namespace std;

int main() {
	cout << "input address : ";

	char address[100]; 
	cin.getline(address,100,'\n'); 
    //1. address에서 2.buffer100개를 받아 입력하고 3.문자를 만나면 종료(default가 enter) 

	cout << "your adrress is  " << address << "\n"; // 주소 출력
}
