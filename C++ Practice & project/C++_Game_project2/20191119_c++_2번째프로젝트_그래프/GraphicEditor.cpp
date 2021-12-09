#pragma once 
//list에서 넣고 뺴고 하는 다 보여주고, 통계정보 보여주고 종료
#include "GraphicEditor.h"

void GraphicEditor ::making_shape()
{
	//각 도형별로 추가할때마다 전체index+1, 그 도형의 index+1해줌
		inserting(); //기본 멘트 출력
		int number;
		while (1) //
		{
			number = in();
			if (number >= 1 && number <= 3)break;
			else
			{
				cout << "잘못된 도형입니다. 1~3 사이의 숫자를 입력해주세요." << endl;
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
	//아무것도 만들어지지 않았을 경우 pstart & plast를 현재 생성 값으로 설정
	if (pStart == nullptr)
	{
		pStart = make_shape;
		pLast = make_shape;
		index = 0;
		return;
	}
	else //그 외에는 그냥 add함
	{
		pLast = pLast->add(make_shape);
		index++;
	}
}

void GraphicEditor::deletegraphic()
{
	//노드를 지울때 index--, 해당 도형의 index-- 해줌
	if (index <= -1) 
	{
		cout << "지울 수 있는 노드가 없습니다" << endl;
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
			cout << "인덱스 번호를 초과하였습니다. 다시 입력해주세요." << endl;
		}
	}
	if (number == 0) //제일 앞에 것을 없앨경우 pstart만 앞으로 옮기고 이전의 pstart를 소멸 시키면 됨
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
	else if (number == index) // 제일끝을 지울 경우 plast = plast->prev를 해줌
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
		delete temp->getNext(); //마지막노드를 지움
		index--;
		return;
	}
	else //지울 노드가 사이에 있을 때
	{
		for (int i = 0; i < number-1; i++) //지울 노드 전 노드를 찾음
		{
			temp = temp->getNext();
		}
		Shape* temp2 = temp->getNext();
		Shape* temp3 = temp2->getNext();
		temp->setNext(temp3); //현 노드의 다음 노드는 next_node가아닌  next_nextnode니까
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
		delete temp2; //지울려고하는 현노드의 다음노드를 삭제함
		index--;
	}
}

void GraphicEditor::showall()
{
	Shape* temp = pStart; //시작노드부터
	int idx = 0;
	while (temp != nullptr) //노드가 없을때까지 해당 도형을 출력
	{
		cout << idx <<": ";
		idx++;
		temp->paint();
		temp = temp->getNext();
	}
}

void GraphicEditor::showseperate()
{
	//각 도형의 갯수 출력
	cout << "Line: " << l_index << endl;
	cout << "Circle: " << c_index << endl;
	cout << "Rectangle: " << r_index << endl;
}

void GraphicEditor::play_graphic()
{
	int menu;
	while (1)
	{
		out_menu(); //시작 멘트
		while (1)
		{
			menu = in();
			if (menu >= 1 && menu <= 5)break;
			else
			{
				cout << "잘못된 선택지 입니다. 1 ~ 5 사이의 숫자를 적어주세요." << endl;
			}
		}
		//메뉴에서 선택한 값에 따라 다른 함수를 실행함
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
			cout << "프로그램이 종료되었습니다." << endl;
			//cout << "계속하려면 아무 키나 누르세요." << endl;
			return;
		}
		
	}
}