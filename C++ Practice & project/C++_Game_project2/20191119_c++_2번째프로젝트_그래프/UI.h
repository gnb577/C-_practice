#pragma once
#include<iostream>
using namespace std;
class UI
{
protected:
	static int num; //�Էº���
public:
	static int in() //�� �Է� �ް� return�ϴ� �Լ�
	{
		cin >> num;
		cin.clear();
		cin.ignore(100, '\n');
		cout << endl;
		return num;
	}
	static void editor();
	static void out_menu();
	static void inserting();
	static void deleting();
};