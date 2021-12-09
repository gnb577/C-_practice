#pragma once 
//list에서 넣고 뺴고 하는 다 보여주고, 통계정보 보여주고 종료
#include "Shape.h"
#include "Circle.h"
#include "Rect.h"
#include "Line.h"
#include "UI.h"


class GraphicEditor :public UI
{
	Shape* make_shape;
	Shape* pStart;
	Shape* pLast;
	int index = -1;
	int c_index=0;
	int r_index=0;
	int l_index=0;
protected:
public:
	GraphicEditor()
	{
		make_shape = nullptr;
		pStart = nullptr;
		pLast = nullptr;
	}
	void making_shape();
	void welcome();
	void play_graphic();
	void addgraphic();
	void deletegraphic();
	void showall();
	void showseperate();
};
