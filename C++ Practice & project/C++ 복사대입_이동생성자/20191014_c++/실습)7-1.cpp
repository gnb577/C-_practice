#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:
	Book(string title = "", int price = 0, int pages = 0)
	{
		this->title = title; this->price = price; this->pages = pages;
	}
	bool operator==(int price);
	bool operator==(string title);
	bool operator==(Book book1);
};

bool Book::operator ==(int price) {
	if (this->price == price) return true;
	else return false;
}
bool Book::operator ==(string title) {
	if (this->title == title) return true;
	else return false;
}
bool Book::operator ==(Book book) {
	if (this->title == book.title && this->price == book.price &&
		this->pages == book.pages) return true;
	else return false;
}
