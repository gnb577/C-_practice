#include <iostream>
#include<cstring>
using namespace std;
y
// cin >>n���� int���� ���� ��� char���� ��������� error�� �ƴ϶� ���ѷ����� ������ �� ��???
int main() {
	int n;
	char name[100];//100���� �迭�� ����
	while (true) {
		
		cout << "���� ID �Է� >> "; //printf 
		( cin >> n).get(); //��ſ� get();int n;
		if (n == -1)break;
		cout << "�̸� ���ڿ� �Է� >> ";
		cin.ignore(1, '\n'); // cin.get(); �����ϳ� ����ϸ� �� //ignore(���,�ش簪��) �����Ѵ�
		cin.getline(name, 100); //������ ���ۿ��� �����͸� �̾ư��� enter�� �����־�ߵǴ� ��
		//������ �Է°��� ���� �Ǵ� �� getline�̶�� �Լ��� enter�� �Է°����� �ν��ؼ� �̻��� ���°� ��
		cout << "ID: " << n << ' ' << name << endl;
	}
	return 0;
}
