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
	string getname()
	{
		return	name;
	}
	int getage()
	{
		return	age;
	}
	bool getgender()
	{
		return	gender;
	}
	virtual void display() = 0;
	virtual void compute_pay() = 0;
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
		cout << getname() << endl;
		cout << getage() << endl;
		cout << getgender() << endl;
		cout << number << endl;
		cout << salary << endl;
	}
	void compute_pay()
	{
		cout << "¿ù±ŞÀº " << number +salary*1.5 << endl;
	}
};

class Temp_Employee :public Person
{
	int number;
	int salary;
	int workday;
public:
	Temp_Employee(string name, int age, bool gender, int num, int sal,int work) :Person(name, age, gender)
	{
		workday = work;
		number = num;
		salary = sal;
	}
	void display()
	{
		cout << getname() << endl;
		cout << getage() << endl;
		cout << getgender() << endl;
		cout << number << endl;
		cout << salary << endl;
	}
	void compute_pay()
	{
		cout << "¿ù±ŞÀº " << number + salary*1.2  << endl;
	}
};

int main()
{
	Employee e("±èÃ¶¼ö", 26, true, 2010001, 2800);

	e.display();
	e.compute_pay();

	Temp_Employee a("±è±İ¼ö", 24, false, 1000001, 1800,15);

	a.display();
	a.compute_pay();
	return 0;
}
