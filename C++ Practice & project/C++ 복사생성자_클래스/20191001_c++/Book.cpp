#include"book.h"

Book::Book(const char* title, int price)
{
	int len = strlen(title);
	this->title = new char[len+1];
	strcpy(this->title,title);
	this->price = price;
}


Book::Book(Book& b)
{
	int len = strlen(b.title); // name의 문자 개수
	this->title = new char[len + 1]; // name 문자열 공간 핟당
	strcpy(this->title,b.title); // name에 문자열 복사
	this->price = b.price;
}

Book::~Book()
{
	delete title;
}

void Book::set(const char* title, int price)
{
	int len = strlen(title);
	this->title = new char[len+1];
	strcpy(this->title, title);
	this->price = price;
}

void Book:: show()
{
	cout << title << " " << price << "원" << endl;
}