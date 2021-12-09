#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char cmd[80];
	cout << "cin.get(char*, int)로 문자열을 읽습니다." << endl;
	while (true) {
		cout << "종료하려면 exit을 입력하세요 >> ";
		cin.get(cmd, 80); // 79개까지의 영어 문자 읽음. //한글은 38개 까지
		if (strcmp(cmd, "exit") == 0) {
			cout << "프로그램을 종료합니다....";
			return 0;
		}
		else
			cin.ignore(1); // 버퍼에 남아 있는 <Enter> 키 ('\n') 제거 안쓰면 무한루프에 빠짐
	}
}
//get()버퍼에 \n가 남아있지만 getline은 버퍼가 깨~끗함