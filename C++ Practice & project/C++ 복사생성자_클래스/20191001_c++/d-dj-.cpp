#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;
	int price;
public:
	Book(const string title, int price);
	Book(const Book& b);
	~Book();
	void set(const string title, int price);
	void show();
};
Book::Book(const string title, int price) {
	this->title = title;
	this->price = price;
}
Book::Book(const Book& b) {
	this->title = title;
	this->price = price;
}
Book::~Book() {

}
void Book::set(const string title, int price) {
	this->title = title;
	this->price = price;
}
void Book::show() {
	cout << title << " " << price << "��" << endl;
}

int main() {
	Book cpp("��ǰC++", 10000);
	Book java = cpp;
	java.set("��ǰ�ڹ�", 12000);
	cpp.show();
	java.show();
}