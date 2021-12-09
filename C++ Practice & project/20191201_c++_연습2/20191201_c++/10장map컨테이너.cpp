#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;
// 맵 생성
int main()
{
	map<string, string> dic; 						// 키는 영어 단어, 값은 한글 단어

	// 원소 저장
	dic.insert(make_pair("love", "사랑"));		// ("love", "사랑") 저장
	dic.insert(pair<string, string>("apple", "사과"));
	dic["cherry"] = "체리"; 								// ("love", "사랑") 저장

	// 원소 검색
	string kor = dic["love"]; 							// kor은 "사랑“
	string kor2 = dic.at("apple"); // kor은 "사랑
	cout <<kor <<endl;
	cout << kor2 << endl;
}