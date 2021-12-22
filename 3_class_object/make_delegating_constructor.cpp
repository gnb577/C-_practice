#include <iostream> 
using namespace std; 

class Circle {
public:
	int radius;
	Circle(); // 위임 생성자
	Circle(int r); // 타겟 생성자
	double getArea();
}; 

Circle::Circle():Circle(1){}
Circle::Circle(int r){
    radius = r;
    cout << "circle make! whose radius is " << radius <<endl; 
}

double Circle::getArea(){
    return 3.14*radius*radius;
}

int main(){
    Circle yours;
    Circle mine(3);
    cout << "your circle is : " << yours.getArea()<<endl;
    cout << "my circle is : " << mine.getArea()<<endl;

}