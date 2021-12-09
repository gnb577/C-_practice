#include "Person.h"

Person::Person()
{
	name = "¾Æ¹«³ª";
	tel = "010-2222-3333";
}

void Person::set(string name, string tel)
{
	this->name = name;
	this->tel = tel;
	return;
}
