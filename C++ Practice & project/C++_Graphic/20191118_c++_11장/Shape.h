#pragma once 

class Shape {
	Shape* next;
protected:
	virtual void draw()=0; //파생클래스에서 순수가상함수
	virtual int getShape() = 0; //어떤 shape가 추가 되고 지워지는 지를 체크해주는 가상함수
public:
	Shape() { next = nullptr; } 
	virtual ~Shape() { }
	void  paint(); 
	int get_shape();
	Shape* add(Shape* p); // node를 추가하는 함수
	Shape* getNext() { return next; } //다음 노드를 가져오거나 탐색하는 함수
	void setNext(Shape* p) //노드를 추가하는 함수
	{
		this->next = p;
	}
};
