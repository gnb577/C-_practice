#include <iostream>
#include <string>
using namespace std;

int main() {
	string s;

	cout << "put string: ";
	getline(cin, s, '\n'); // 문자열 입력
	int len = s.length(); // 문자열의 길이

    for(int i=0;i<len;i++){
        string first= s.substr(0,1);
        string sub=s.substr(1,len-1);
        s = sub+first;
        cout << s <<endl;
    }
	
}
