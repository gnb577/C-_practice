#include<iostream>
using namespace std;
class Point{
    double x;
    double y;
    public:
    Point();
    Point(double,double);
    double getX();
    double getY();
    void setX(double);
    void setY(double);
    void showPoint();
};

Point::Point():Point(0,0){}
Point::Point(double a,double b)
{
    x = a; y =b;
    cout << "point create~ x: " << x << " y: " << y <<endl;
}

double Point::getX(){
    cout << "getX : " << x <<endl;
    return x;
}

double Point::getY(){
    cout << "getY : "<< y <<endl;
    return y;
}

void Point::setX(double a){
    x = a;
    cout << "setX : "<< x <<endl;
}

void Point::setY(double b){
    y = b;
    cout << "setY : "<< y <<endl;
}

void Point::showPoint(){
    cout << "x is " << x << " y is " << y << endl;
}


int main()
{
    Point dot(2,3);
    dot.getX();
    dot.getY();
    dot.setX(20);
    dot.setY(30);
    dot.showPoint();
    return 0;
}