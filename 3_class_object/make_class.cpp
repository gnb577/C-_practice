#include<iostream>
using namespace std;

class Circle{
public:
    int radius; //멤버 변수
    double getArea(); //멤버 함수
};

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle donut;
    donut.radius = 5;
    double c_area = donut.getArea();
    cout << "area: " << c_area;
}