#include <iostream>
#include <string>
using namespace std;

class Book {
	string title;   // 제목 문자열
	int price;     // 가격
public:
	Book(const string title, int price);
	Book(const Book& b);
	void set(const string title, int price);
	void show();
		
};

Book::Book(const string title, int price)
{
	this->title = title;
	this->price = price;
}

Book::Book(const Book& b)
{
	this->title = b.title;
	this->price = b.price;
}



void Book::set(const string title, int price)
{
	this->title = title;
	this->price = price;
}

void Book:: show()
{
	cout << title << " " << price;
}

int main()
{
	Book c1("안녕", 50);
	Book c2(c1);

	c2.show();
}