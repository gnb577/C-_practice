#pragma once
#define PERSON_H
#include<iostream>
#include<cstring>
#include<string>

using namespace std;
class Person
{
	string name;
	int age;
public:
	Person(string _s, int _age);
	Person(string _s);
	Person();
	string getName();
	void setName(string _s);
	int getAge();
	void setAge(int _age);
	void show();

};
