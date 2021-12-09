#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person { // Person Ŭ���� ����
	char* name;
	int id;
public:
	Person(int id, const char* name); // ������
	Person(Person& person); // ���� ������
	~Person(); // �Ҹ���
	void changeName(const char* name);
	void f(Person person);
	Person g();
	void show() { cout << id << ',' << name << endl; }
};

Person::Person(int id, const char* name) { // ������
	this->id = id;
	int len = strlen(name); // name�� ���� ����
	this->name = new char[len + 1]; // name ���ڿ� ���� ����
	strcpy(this->name, name); // name�� ���ڿ� ����
}

Person::Person(Person& person) { // ���� ������
	this->id = person.id; // id �� ����
	int len = strlen(person.name);// name�� ���� ����
	this->name = new char[len + 1]; // name�� ���� ���� ����
	strcpy(this->name, person.name); // name�� ���ڿ� ����
	cout << "���� ������ ����. ���� ��ü�� �̸� " << this->name << endl;
}

Person::~Person() {// �Ҹ���
	if (name) // ���� name�� ���� �Ҵ�� �迭�� ������
		delete[] name; // ���� �Ҵ� �޸� �Ҹ�
}

void Person::changeName(const char* name) { // �̸� ����
	if (strlen(name) > strlen(this->name))
		return; // ���� name�� �Ҵ�� �޸𸮺��� �� �̸����� �ٲ� �� ����.
	strcpy(this->name, name);
}


void Person::f(Person person)
{

		person.changeName("dummy");
	
}

Person Person ::g() {
	Person mother(2, "Jane");
	return mother;
}


int main() {
	Person father(1, "Kitae");
	Person son = father;
	f(father);
	g();
}
