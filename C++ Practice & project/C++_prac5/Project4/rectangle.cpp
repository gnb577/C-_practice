#include<iostream>
#include<cstring>

using namespace std;


//class 선언부는 struct부분
//class 구현부는 함수선언

//선언부와 구현부는 따로 생성하는 것이 좋음 구분해서 사용할 수 있기때문

//class를 선언하면 해당 class이름과 동일한 함수 ex)Circle(); Circle(int r);을 자동으로 생성
//class는 return을 할 수 없다(struct와 함수를 가진 게 class라고 보고있다)
//이러한 함수를 생성자라고 한다
// 객체를 초기화 하기 위해서 생성됨
//생성자는 클래스 이름과 동일함
//중복정의는 가능하나 실행은 둘 중 하나만 함 circle(), circle(int n)중 골라서


class Rectangle
{
public:
	int width;
	int height;
	int getArea();
};

int Rectangle::getArea()
{
	return height * width;
}

int main()
{
	Rectangle rect;
	rect.width = 3;
	rect.height = 5;
	cout << "사각형의 면적은 " << rect.getArea() << endl;

}