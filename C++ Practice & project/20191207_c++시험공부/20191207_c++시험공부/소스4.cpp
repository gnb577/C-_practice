#include <iostream>
#include <fstream>
using namespace std;

int main() {
	// ��Ʈ�� ��ü ���� �� ���� ����
	ifstream fin;  
	fin.open("student.txt"); 

//->�ѹ�������  ifstream fin("c:\\temp\\student.txt"); 
	if(!fin) {  // ���� ���� ���� Ȯ��
		cout << "������ �� �� ����";
		return 0;
	}
	
	char name[10], dept[20];
	int sid;

	// ���� �б�
	fin >> name; // ���Ͽ� �ִ� ���ڿ��� �о name �迭�� ����
	fin >> dept; // ���ڿ��� �а� dept �迭�� ����
	fin >> sid; // ������ �о sid ������ ������ ����
	
	
	// ���� �ؽ�Ʈ�� ȭ�鿡 ���
	cout << name << endl;
	cout << dept << endl;
	cout << sid << endl;


	fin.close(); // ���� �б⸦ ��ġ�� ������ �ݴ´�.
}
