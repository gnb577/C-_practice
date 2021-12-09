#include<iostream>
#include<string>
#include<cstring>

using namespace std;

class Book {
	string title;
	int price;
	int pages;
public:

	friend bool operator ==(Book book, int price);
	friend bool operator ==(Book book, string title);
	friend bool operator ==(Book book1, Book book2);
};
bool operator ==(Book book, int price) {
	if (book.price == price) return true;
	else return false;
}
bool operator ==(Book book, string title) {
	if (book.title == title) return true;
	else return false;
}
bool operator ==(Book book1, Book book2) {

	if(book1.title == book2.title && book1.price == book2.price && book1.pages == book2.pages)return true;
	else return false;
}
