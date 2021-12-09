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
	int len = strlen(b.title); // name�� ���� ����
	this->title = new char[len + 1]; // name ���ڿ� ���� ����
	strcpy(this->title,b.title); // name�� ���ڿ� ����
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
	cout << title << " " << price << "��" << endl;
}