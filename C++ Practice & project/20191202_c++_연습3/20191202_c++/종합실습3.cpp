#include <iostream>
#include <string>
using namespace std;

class Student {
	string name;
	string telephone;
public:
	Student(string name1, string phone1);
	string getTelephone();
	void setTelephone(string phone);
	string getName();
	void setName(string name);
};

Student::Student(string name1, string phone1)
{
	name = name1;
	telephone = phone1;
}
string Student::getTelephone()
{
	return telephone;
}
string Student::getName()
{
	return name;
}
void Student:: setName(string name)
{
	this->name = name;
}
void Student::setTelephone(string phone)
{
	this->telephone = phone;
}
class Lab {
	string name;
	Student* chief;
	Student* manager;
public:
	Lab(string labname)
	{
		name = labname;
	}
	void setChief(Student* a)
	{
		chief = a;
	}
	void setManager(Student* a)
	{
		manager = a;
	}
	void print()
	{
		cout << name << "연구실" << endl;
		cout <<"실장은 "<< chief->getName() << endl;
		cout << "매니저는 " << manager->getName() << endl;
	}
};

int main()
{
	Lab lab("영상처리");
	Student* p = new Student("김철수", "011-123-5678");

	lab.setChief(p);
	lab.setManager(p);
	lab.print();

	delete p;
	return 0;
}
