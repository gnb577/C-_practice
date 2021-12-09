
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
	name = "아무나";
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
		cout << "이름과 전화 번호를 입력해 주세요" << endl;
		for (int i = 0; i < 3; i++) {
			cout << "사람 " << i + 1 << ">> ";
			cin >> name >> tel;
			p[i].set(name, tel);
			}
			*/
	PersonManager(int n);
		/*
		p = new Person[n];
		size = n;
		string name, tel;
		cout << "이름과 전화 번호를 입력해 주세요" << endl;
		for (int i = 0; i < size; i++) {
			cout << "사람 " << i + 1 << ">> ";
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
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < size; i++) {
		cout << "사람 " << i + 1 << ">> ";
		cin >> name >> tel;
		p[i].set(name, tel);
	}
}

PersonManager:: PersonManager(int n)
{
			p = new Person[n];
			size = n;			string name, tel;
			cout << "이름과 전화 번호를 입력해 주세요" << endl;
			for (int i = 0; i < size; i++) {
				cout << "사람 " << i + 1 << ">> ";
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
		cout << "모든 사람의 이름은 ";
		for (int i = 0; i < size; i++) {
			cout << p[i].getName() << ' ';
		}
		cout << endl;
	}

void PersonManager :: search() {
		string name;
		cout << "전화번호 검색합니다. 이름을 입력하세요>>";
		cin >> name;
		for (int i = 0; i < size; i++) {
			if (name == p[i].getName()) {
				cout << "전화 번호는 " << p[i].getTel() << endl;
				return;
			}
		}
		cout << "없는 사람입니다" << endl;
}			

void PersonManager::input()
{
	int change_num;
	cout << "바꿀 위치를 선택하세요." << endl;
	cin >> change_num;
	string change_name,change_tel;
	cout << "바꿀 사람의 이름과 전화번호를 입력해주세요." << endl;
	cin >> change_name >> change_tel;
	p[change_num].set(change_name, change_tel);
}

int main()
{
	int num = 0;
	cout << "원소 수를 입력하세요!" << endl;
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
나
3
너
2
우리
1
*/
