#include<iostream>
#include<cstring>
using namespace std;

class Person
{
public:
	string name;
	int age;
	void show();
	Person();
	Person(string s);
	Person(string s, int age);

};

void Person::show()
{
	cout << name << "  " << age<< "�Դϴ�" << endl;
}

Person::Person(string s, int age):name(s),age(age)
{
}
Person::Person(string s) : name(s), age(20)
{
}
Person::Person() : name("ȫ�浿"), age(20)
{
}

int main()
{
	Person p1, p2,p3;
	
	string name1, name2;
	string name3;
	int age1, age2,age3=0;

	cout << "����� �̸��� ";
	cin >> name1;
	p1.name = name1;

	cout << "����� ���̴� ";
	cin >> age1;

	p1.age = age1;
	p1.show();

	cout << "����� �̸��� ";
	cin >> name2;
	p2.name = name2;

	cout << "����� ���̴� ";
	cin >> age2;

	p2.age = age2;
	p2.show();

	cout << "����� �̸��� ";
	cin >> name3;
	p3.name = name3;

	cout << "����� ���̴� ";
	cin >> age3;

	p3.age = age3;
	p3.show();

}