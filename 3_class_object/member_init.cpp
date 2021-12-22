#include <iostream>
using namespace std;

class Point {
	int x, y;
public:
	Point();
	Point(int a, int b);
	void show() { cout << "(" << x << ", " << y << ")" << endl; }
};

Point::Point() {x=0;y=0;}
Point::Point(int a,int b) {x=a;y=b;}

int main()
{
    Point get_no;
    Point get_ab(10,20);
    get_no.show();
    get_ab.show();
}