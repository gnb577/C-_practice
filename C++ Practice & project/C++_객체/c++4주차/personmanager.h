#pragma once
#include "Person.h"
class PersonManager {
	Person* p;
	int size;
public:
	PersonManager();
	/*
	p = new Person[3];
	size = 3;
	string name, tel;
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < 3; i++) {
		cout << "사람 " << i + 1 << ">> ";
		cin >> name >> tel;
		p[i].set(name, tel);
		}
		*/
	PersonManager(int n);
	/*
	p = new Person[n];
	size = n;
	string name, tel;
	cout << "이름과 전화 번호를 입력해 주세요" << endl;
	for (int i = 0; i < size; i++) {
		cout << "사람 " << i + 1 << ">> ";
		cin >> name >> tel;
		p[i].set(name, tel);
		}
		*/
	~PersonManager();
	void input();
	void show();
	void search();


};