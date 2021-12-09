#include <iostream>
#include <string>
using namespace std;

class Person
{
	string name;
	int age;
	bool gender;
public:
	Person(string name1, int age1, bool gender1)
	{
		name = name1;
		age = age1;
		gender = gender1;
	}
	void display()
	{
		cout << name << endl;
		cout << age << endl;
		cout << gender << endl;
	}
};

class Employee :public Person {
	int number;
	int salary;
public:
	Employee(string name, int age, bool gender, int num, int sal) :Person(name, age, gender)
	{
		number = num;
		salary = sal;
	}
	void display()
	{
		Person::display();
		cout << number << endl;
		cout << salary << endl;
	}
};

int main()
{
	Employee e("±èÃ¶¼ö", 26, true, 2010001, 2800);
	e.display();
	return 0;
}
