#pragma once
#include<iostream>
using namespace std;
class UI
{
protected:
	static int num; //입력변수
public:
	static int in() //값 입력 받고 return하는 함수
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