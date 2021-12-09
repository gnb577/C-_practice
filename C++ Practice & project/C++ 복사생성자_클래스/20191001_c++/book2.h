#pragma once

#include<iostream>
#include<string>
using namespace std;

class Book2 {
	string title;
	int price;
public:
	Book2(const string title, int price);
	Book2(const Book2& b);
	~Book2();
	void set(const string title, int price);
	void show();
};
