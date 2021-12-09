
#include <iostream>
#include <string>
using namespace std;

class Person {
	string name;
	string tel;
public:
	Person();
	string getName() { return name; }
	string getTel() { return tel; }
	void set(string name, string tel);
};

Person::Person()
{
	name = "�ƹ���";
	tel = "010-2222-3333";
}

void Person::set(string name, string tel)
{
	this->name = name;
	this->tel = tel;
	return;
}

class PersonManager {
	Person* p;
	int size;
public:
	PersonManager();
		/*
		p = new Person[3];
		size = 3;
		string name, tel;
		cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
		for (int i = 0; i < 3; i++) {
			cout << "��� " << i + 1 << ">> ";
			cin >> name >> tel;
			p[i].set(name, tel);
			}
			*/
	PersonManager(int n);
		/*
		p = new Person[n];
		size = n;
		string name, tel;
		cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
		for (int i = 0; i < size; i++) {
			cout << "��� " << i + 1 << ">> ";
			cin >> name >> tel;
			p[i].set(name, tel);
			}
			*/
	~PersonManager();
	void input();
	void show();
	void search();


};

PersonManager::PersonManager()
{
	p = new Person[3];
	size = 3;
	string name, tel;
	cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
	for (int i = 0; i < size; i++) {
		cout << "��� " << i + 1 << ">> ";
		cin >> name >> tel;
		p[i].set(name, tel);
	}
}

PersonManager:: PersonManager(int n)
{
			p = new Person[n];
			size = n;			string name, tel;
			cout << "�̸��� ��ȭ ��ȣ�� �Է��� �ּ���" << endl;
			for (int i = 0; i < size; i++) {
				cout << "��� " << i + 1 << ">> ";
				cin >> name >> tel;
				p[i].set(name, tel);
			}
}

PersonManager::~PersonManager()
{
	delete []p;
}

void PersonManager ::show()
	{
		cout << "��� ����� �̸��� ";
		for (int i = 0; i < size; i++) {
			cout << p[i].getName() << ' ';
		}
		cout << endl;
	}

void PersonManager :: search() {
		string name;
		cout << "��ȭ��ȣ �˻��մϴ�. �̸��� �Է��ϼ���>>";
		cin >> name;
		for (int i = 0; i < size; i++) {
			if (name == p[i].getName()) {
				cout << "��ȭ ��ȣ�� " << p[i].getTel() << endl;
				return;
			}
		}
		cout << "���� ����Դϴ�" << endl;
}			

void PersonManager::input()
{
	int change_num;
	cout << "�ٲ� ��ġ�� �����ϼ���." << endl;
	cin >> change_num;
	string change_name,change_tel;
	cout << "�ٲ� ����� �̸��� ��ȭ��ȣ�� �Է����ּ���." << endl;
	cin >> change_name >> change_tel;
	p[change_num].set(change_name, change_tel);
}

int main()
{
	int num = 0;
	cout << "���� ���� �Է��ϼ���!" << endl;
	cin >> num;
	PersonManager p_name(num);
	p_name.show();
	p_name.search();
	p_name.input();
	p_name.search();
	p_name.show();
}

/*
3
��
3
��
2
�츮
1
*/
