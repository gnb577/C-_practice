
#include "Person.h"

Person::Person(string _s, int _age) :name(_s), age(_age) {}
Person::Person(string _s):name(_s), age(20) {}
Person::Person():name("홍길동"),age(20){}

string Person::getName()
{
	return name;
}
int Person::getAge()
{
	return age;
}
void Person::setName(string _s)
{
	name=_s;
}
void Person::setAge(int _age)
{
	age = _age;
}

void Person::show()
{
	cout << "이름은 " << name << "나이는 " << name << endl;
}

int main()
{
	Person p1("말",25), p2("개");
	p1.show();
	p2.show();
	
}