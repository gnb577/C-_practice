#include<iostream>

using namespace std;
class shape
{
	shape* next;

public:
	shape()
	{
		next = nullptr;
	}
	shape* add(shape* d)
	{
		this->next = d;
		return d;
	}
};

class Circle :public shape
{
public:
	Circle() {  };

};

int main()
{
	double pi = 3.14;
	auto area = [pi](int r)->double {return r * r * pi; }; 
	return 0;
}
int main()
{
	shape* pstart;
	shape* plast;
	pstart = new Circle();
	plast = pstart;
	plast = plast->add(new Circle());
}