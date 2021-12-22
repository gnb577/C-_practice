#include <iostream>
#include <string>
using namespace std;

int main() {
	string names[5]; // 문자열 배열 선언

	for(int i=0; i<5; i++) {
		cout << "name >> ";
		getline(cin, names[i], '\n');
        //cin.getline(address,100,'\n'); 비슷한 느낌인듯?
	}
	
	string latter = names[0];
	for(int i=1; i<5; i++) {
		if(latter < names[i]) { // 사전 순으로 latter 문자열이 앞에 온다면
			latter = names[i]; // latter 문자열 변경
		}
	}
	cout << "last of lexicographical order is " << latter << endl;
}
