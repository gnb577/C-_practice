#include<iostream>
#include "Person.h"
#include "personmanager.h"


int main()
{
	int num = 0;
	cout << "���� ���� �Է��ϼ���!" << endl;
	cin >> num;
	PersonManager p_name(num);
	p_name.show();
	p_name.search();
	p_name.input();
	p_name.search();
	p_name.show();
}