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
	cout << name << "  " << age<< "입니다" << endl;
}

Person::Person(string s, int age):name(s),age(age)
{
}
Person::Person(string s) : name(s), age(20)
{
}
Person::Person() : name("홍길동"), age(20)
{
}

int main()
{
	Person p1, p2,p3;
	
	string name1, name2;
	string name3;
	int age1, age2,age3=0;

	cout << "당신의 이름은 ";
	cin >> name1;
	p1.name = name1;

	cout << "당신의 나이는 ";
	cin >> age1;

	p1.age = age1;
	p1.show();

	cout << "당신의 이름은 ";
	cin >> name2;
	p2.name = name2;

	cout << "당신의 나이는 ";
	cin >> age2;

	p2.age = age2;
	p2.show();

	cout << "당신의 이름은 ";
	cin >> name3;
	p3.name = name3;

	cout << "당신의 나이는 ";
	cin >> age3;

	p3.age = age3;
	p3.show();

}