class Circle {
	int radius;
public:  
	double getArea();
   Circle();
   Circle(int r);
   //void Circle(short r);  //함수 이름은 생성자와 같을 수 없다.
};
int main()  {
   Circle waffle; 
   Circle pizza(30);  
   double d=pizza.getArea(); 
}
