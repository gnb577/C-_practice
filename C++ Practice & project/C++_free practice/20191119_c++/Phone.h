#pragma once
#include<string>
#include<cstring>
#include<iostream>

using namespace std;
class Phone { // ��ȭ ��ȣ�� ǥ���ϴ� Ŭ����
	string name;
	string telnum;
	string address;
public:
	Phone(string name = "", string telnum = "", string address = "") {
		this->name = name;
		this->telnum = telnum;
		this->address = address;
	}
	friend ostream& operator << (ostream& outs, const Phone& c);  // <<�� ������ ����
	friend istream& operator >> (istream& ins, Phone& c);
};