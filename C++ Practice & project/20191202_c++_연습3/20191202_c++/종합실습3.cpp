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
		cout << name << "������" << endl;
		cout <<"������ "<< chief->getName() << endl;
		cout << "�Ŵ����� " << manager->getName() << endl;
	}
};

int main()
{
	Lab lab("����ó��");
	Student* p = new Student("��ö��", "011-123-5678");

	lab.setChief(p);
	lab.setManager(p);
	lab.print();

	delete p;
	return 0;
}
