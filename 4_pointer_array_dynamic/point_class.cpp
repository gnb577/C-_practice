#include "iostream"
#include "string"

using namespace std;

class Point{
    double x;
    double y;
public:
    Point();
    Point(double a, double b);
    void setX(double xx);
    void setY(double yy);
    void showPoint();
};

Point::Point():x(0),y(0){}
Point::Point(double a,double b){
    a = x; b = y;
}
void Point::setX(double xx){
    x = xx;
}

void Point::setY(double yy){
    y = yy;
}

void Point::showPoint(){
    cout << "x: " << x << " y: " << y << endl; 
}

int main(){
    Point p[5];
    double xx,yy;
    


    for (int i = 0; i < 5; i++)
    {  	cout << "x(double) : ";
      	cin >> xx;
        cout << "y(double) : ";
       	cin >> yy;
	    p[i].setX(xx);
	    p[i].setY(yy);
    }
    for (int i = 0; i < 5; i++)
        p[i].showPoint();
    return 0;
}

