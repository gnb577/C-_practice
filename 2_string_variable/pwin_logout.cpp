#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char password[11];
	cout << "put your password!" << endl;
    while(true){
        cout << "Password : ";
        cin >> password;
        if(strcmp(password,"C++")==0){
            cout << "program logout..." << endl;
            break;
        }
        else{
            cout << "u got wrong password~ do again" << endl;
        }
    }
    return 0; 
}