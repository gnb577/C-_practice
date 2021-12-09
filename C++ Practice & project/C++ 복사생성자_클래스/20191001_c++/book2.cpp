#include"book2.h"

Book2::Book2(const string title, int price) 
{
	this->title = title;
	this->price = price;
}


Book2::Book2(const Book2& b)
{
	this->title = b.title; // name 문자열 공간 핟당
	this->price = b.price;
}

Book2::~Book2()
{
}

void Book2::set(const string title, int price)
{
	this->title = title;
	this->price = price;
}

void Book2::show()
{
	cout << title << " " << price << "원" << endl;
}