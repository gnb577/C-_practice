#include <iostream>
#include <string> 
using namespace std;

int main() {
	string song("Falling in love with you"); // 문자열 song
	string elvis("Elvis Presley"); // 문자열 elvis
	string singer; // 문자열 singer

	cout << song + "is who's song? : "; // + 로 문자열 연결
	cout << "(hint : first letter is " << elvis[0] << ")?";  // [] 연산자 사용

	getline(cin, singer); // 문자열 입력
	if(singer == elvis)  // 문자열 비교
			cout << "Correct";
	else
			cout << "Wrong. He is " + elvis << endl; // +로 문자열 연결
}
