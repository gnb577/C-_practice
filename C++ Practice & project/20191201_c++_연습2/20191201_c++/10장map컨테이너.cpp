#include<iostream>
#include<string>
#include<map>
#include<vector>

using namespace std;
// �� ����
int main()
{
	map<string, string> dic; 						// Ű�� ���� �ܾ�, ���� �ѱ� �ܾ�

	// ���� ����
	dic.insert(make_pair("love", "���"));		// ("love", "���") ����
	dic.insert(pair<string, string>("apple", "���"));
	dic["cherry"] = "ü��"; 								// ("love", "���") ����

	// ���� �˻�
	string kor = dic["love"]; 							// kor�� "�����
	string kor2 = dic.at("apple"); // kor�� "���
	cout <<kor <<endl;
	cout << kor2 << endl;
}