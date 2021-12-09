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
	cout << name << "  " << age << "�Դϴ�" << endl;
}

Person::Person(string s, int age) :name(s), age(age)
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
	Person p1, p2, p3;

	p1.name = "�ϸ�";
	p1.age = 30;
	p1.show();

	p2.name = "�ϸ�";
	p2.show();

	p3.show();

}