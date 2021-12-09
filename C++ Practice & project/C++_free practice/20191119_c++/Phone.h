#pragma once
#include<string>
#include<cstring>
#include<iostream>

using namespace std;
class Phone { // 전화 번호를 표현하는 클래스
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend ostream& operator << (ostream& outs, const Phone& c);  // <<를 프렌드 선언
	friend istream& operator >> (istream& ins, Phone& c);
};