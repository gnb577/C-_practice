#pragma once 
//list���� �ְ� ���� �ϴ� �� �����ְ�, ������� �����ְ� ����
#include "GraphicEditor.h"

void GraphicEditor ::making_shape()
{
	//�� �������� �߰��Ҷ����� ��üindex+1, �� ������ index+1����
		inserting(); //�⺻ ��Ʈ ���
		int number;
		while (1) //
		{
			number = in();
			if (number >= 1 && number <= 3)break;
			else
			{
				cout << "�߸��� �����Դϴ�. 1~3 ������ ���ڸ� �Է����ּ���." << endl;
			}
		}
		if (number == 1)
		{
			make_shape = new Line();
			l_index++;
		}
		else if (number == 2)
		{
			make_shape = new Circle();
			c_index++;
		}
		else if (number == 3)
		{
			make_shape = new Rect();
			r_index++;
		}

}

void GraphicEditor::welcome()
{
	editor();
}

void GraphicEditor::addgraphic()
{
	making_shape();
	//�ƹ��͵� ��������� �ʾ��� ��� pstart & plast�� ���� ���� ������ ����
	if (pStart == nullptr)
	{
		pStart = make_shape;
		pLast = make_shape;
		index = 0;
		return;
	}
	else //�� �ܿ��� �׳� add��
	{
		pLast = pLast->add(make_shape);
		index++;
	}
}

void GraphicEditor::deletegraphic()
{
	//��带 ���ﶧ index--, �ش� ������ index-- ����
	if (index <= -1) 
	{
		cout << "���� �� �ִ� ��尡 �����ϴ�" << endl;
		return;
	}
	deleting();
	int number;
	Shape* temp = pStart;
	while (1)
	{
		number = in();
		if (number >=0 && number <= index) break;
		else
		{
			cout << "�ε��� ��ȣ�� �ʰ��Ͽ����ϴ�. �ٽ� �Է����ּ���." << endl;
		}
	}
	if (number == 0) //���� �տ� ���� ���ٰ�� pstart�� ������ �ű�� ������ pstart�� �Ҹ� ��Ű�� ��
	{
		int what_shape = pStart->get_shape();
		if (what_shape == 1)
		{
			l_index--;
		}
		else if (what_shape == 2)
		{
			c_index--;
		}
		else if (what_shape == 3)
		{
			r_index--;
		}
		pStart = pStart->getNext();
		delete temp;
		index--;
		return;
	}
	else if (number == index) // ���ϳ��� ���� ��� plast = plast->prev�� ����
	{
		while (temp->getNext() != nullptr)
		{
			temp = temp->getNext();
		}
		pLast = temp; 
		int what_shape = temp->getNext()->get_shape();
		if (what_shape == 1)
		{
			l_index--;
		}
		else if (what_shape == 2)
		{
			c_index--;
		}
		else if (what_shape == 3)
		{
			r_index--;
		}
		delete temp->getNext(); //��������带 ����
		index--;
		return;
	}
	else //���� ��尡 ���̿� ���� ��
	{
		for (int i = 0; i < number-1; i++) //���� ��� �� ��带 ã��
		{
			temp = temp->getNext();
		}
		Shape* temp2 = temp->getNext();
		Shape* temp3 = temp2->getNext();
		temp->setNext(temp3); //�� ����� ���� ���� next_node���ƴ�  next_nextnode�ϱ�
		int what_shape = temp2->get_shape();
		if (what_shape == 1)
		{
			l_index--;
		}
		else if (what_shape == 2)
		{
			c_index--;
		}
		else if (what_shape == 3)
		{
			r_index--;
		}
		delete temp2; //��������ϴ� ������� ������带 ������
		index--;
	}
}

void GraphicEditor::showall()
{
	Shape* temp = pStart; //���۳�����
	int idx = 0;
	while (temp != nullptr) //��尡 ���������� �ش� ������ ���
	{
		cout << idx <<": ";
		idx++;
		temp->paint();
		temp = temp->getNext();
	}
}

void GraphicEditor::showseperate()
{
	//�� ������ ���� ���
	cout << "Line: " << l_index << endl;
	cout << "Circle: " << c_index << endl;
	cout << "Rectangle: " << r_index << endl;
}

void GraphicEditor::play_graphic()
{
	int menu;
	while (1)
	{
		out_menu(); //���� ��Ʈ
		while (1)
		{
			menu = in();
			if (menu >= 1 && menu <= 5)break;
			else
			{
				cout << "�߸��� ������ �Դϴ�. 1 ~ 5 ������ ���ڸ� �����ּ���." << endl;
			}
		}
		//�޴����� ������ ���� ���� �ٸ� �Լ��� ������
		if (menu == 1)
		{
			addgraphic();
		}
		else if (menu == 2)
		{
			deletegraphic();
		}
		else if (menu == 3)
		{
			showall();
		}
		else if (menu == 4)
		{
			showseperate();
		}
		else if (menu == 5)
		{
			cout << "���α׷��� ����Ǿ����ϴ�." << endl;
			//cout << "����Ϸ��� �ƹ� Ű�� ��������." << endl;
			return;
		}
		
	}
}