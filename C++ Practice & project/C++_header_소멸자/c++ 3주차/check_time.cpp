class Circle {
public:
	int radius;
	double getarea();
	Circle(int r);
	Circle();
};

Circle::Circle(int r) : radius(r)
{

}

int main() {
	Circle coin(3);
}


class Circle {
	int radius;
public:
	double getArea();
	Circle();
	Circle(int r);
   void Circle(short r);    // 1 ->class��ü�� datatype�̿��� void���� �� ����
};
int main() {
	Circle waffle;    //  2
	Circle pizza(30);    //  3
	double d = pizza.getArea();   //  4
}
