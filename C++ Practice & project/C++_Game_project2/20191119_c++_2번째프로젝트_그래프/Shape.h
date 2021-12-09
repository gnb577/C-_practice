#pragma once 

class Shape {
	Shape* next;
protected:
	virtual void draw()=0; //�Ļ�Ŭ�������� ���������Լ�
	virtual int getShape() = 0; //� shape�� �߰� �ǰ� �������� ���� üũ���ִ� �����Լ�
public:
	Shape() { next = nullptr; } 
	virtual ~Shape() { }
	void  paint(); 
	int get_shape();
	Shape* add(Shape* p); // node�� �߰��ϴ� �Լ�
	Shape* getNext() { return next; } //���� ��带 �������ų� Ž���ϴ� �Լ�
	void setNext(Shape* p) //��带 �߰��ϴ� �Լ�
	{
		this->next = p;
	}
};
