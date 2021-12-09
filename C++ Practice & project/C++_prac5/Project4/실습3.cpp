#include <iostream>
#include<cstring>
using namespace std;
y
// cin >>n에서 int형식 문자 대신 char형을 집어넣으면 error가 아니라 무한루프에 빠지는 데 왜???
int main() {
	int n;
	char name[100];//100개의 배열을 생성
	while (true) {
		
		cout << "정수 ID 입력 >> "; //printf 
		( cin >> n).get(); //대신에 get();int n;
		if (n == -1)break;
		cout << "이름 문자열 입력 >> ";
		cin.ignore(1, '\n'); // cin.get(); 둘중하나 사용하면 됨 //ignore(몇개의,해당값을) 무시한다
		cin.getline(name, 100); //원래는 버퍼에서 데이터를 뽑아가고 enter가 남아있어야되는 데
		//원래는 입력값만 들어가야 되는 데 getline이라는 함수가 enter도 입력값으로 인식해서 이상한 상태가 됨
		cout << "ID: " << n << ' ' << name << endl;
	}
	return 0;
}
