#include <iostream>
#include <string> //cstring대신 string으로 string library를 누려보자
using namespace std;

int main() {
	string password;
	cout << "put your password!" << endl;
    while(true){
        cout << "Password : ";
        cin >> password;
        // char 타입이 아니면 strcmp를 사용할 수 없단다.
        if(password == "C++"){
            cout << "program logout..." << endl;
            break;
        }
        else{
            cout << "u got wrong password~ do again" << endl;
        }
    }
    return 0; 
}