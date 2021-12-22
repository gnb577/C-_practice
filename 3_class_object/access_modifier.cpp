class Circle {
public:
	int radius; 
	Circle(); 
	Circle(int r); 
	double getArea(); 
}; 


Circle::Circle() {
	radius = 1;
}
Circle::Circle(int r) {
	radius = r;
}

int main() {
	Circle waffle;
	waffle.radius = 5; //private이 아니기 때문에 외부에서도 가능
    //radius가 private? --> 오류
}


