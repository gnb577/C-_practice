#include<iostream>
#include "Person.h"
#include "personmanager.h"

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

PersonManager::PersonManager(int n)
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
	delete[]p;
}

void PersonManager::show()
{
	cout << "��� ����� �̸��� ";
	for (int i = 0; i < size; i++) {
		cout << p[i].getName() << ' ';
	}
	cout << endl;
}

void PersonManager::search() {
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
	string change_name, change_tel;
	cout << "�ٲ� ����� �̸��� ��ȭ��ȣ�� �Է����ּ���." << endl;
	cin >> change_name >> change_tel;
	p[change_num+1].set(change_name, change_tel);
}