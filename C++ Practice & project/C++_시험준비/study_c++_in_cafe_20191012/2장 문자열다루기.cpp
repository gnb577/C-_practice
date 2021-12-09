/*

cin.getline(char buf[], int size, char delimitChar)
#단 char 배열일 때 저런 형식이고

#string형식의 경우는
cin.getname(cin,name)이런식으로 해야된다


buf,에 최대 size-1개의 문자입력,\0
delimitchar를 만나면 입력중단하겠다
원래는 띄워쓰기를 하면 거기서 입력이 중단되나
getline(어느 배열을, 어느 범위까지, 이 문자가 나오기전은 끝이아니다)
getline을 이용해 enter => null을 만나기전까지는 모두 한 문장으로 보겠다라는 뜻임

###cin 주의점###
예를 들어
string s1 s2가 있고
cin >> s1;
cin.getline("hello world!",s2);
가 있다고하자
cin 입력버퍼에 의해 실제로 hello를 집어 넣다고 치면
입력버퍼에는 hello\0가 들어있는 상태지만
s1에는 hello까지만 들어가 입력버퍼는 비지 않고 \0상태로 남아있어
다음 s2에는 \0hello world! 가 들어가게 되는 사태가 생기므로
cin.ignore()를 사용해야함

부록
cin.get()
한 단어를 받음
따라서
a=cin.get();
b=cin.get();
c=cin.get();

에서 t c g를 입력하면
t

c
가나옴

*/


/*

좋은 예시


#include <iostream>
using namespace std;
#define SIZE 1000

int main()
{
	char arr[2][SIZE];

	cin.getline(arr[0], SIZE);
	cin.getline(arr[1], SIZE);

	cout << arr[0] << endl;
	cout << arr[1] << endl;

	return 0;
}
​

더 좋은 방법은 string 을 사용하는것입니다

#include <iostream>
#include <string>
using namespace std;

int main()
{
	string arr[2];

	getline(cin, arr[0]);
	getline(cin, arr[1]);

	cout << arr[0] << endl;
	cout << arr[1] << endl;

	return 0;
}

*/