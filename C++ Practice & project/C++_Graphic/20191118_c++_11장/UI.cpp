#include <iostream>
#include "UI.h"
using namespace std;

int UI::num = 0;
void UI::editor()
{
	cout << "그래픽 에디터 입니다." << endl;
}
void UI::out_menu()
{
	cout << "삽입: 1, 삭제: 2, 모두보기: 3, 통계정보: 4, 종료: 5 >> ";
}
void UI::inserting()
{
	cout << "선: 1, 원: 2, 사각형: 3 >> ";
}
void UI::deleting()
{
	cout << "삭제하고자 하는 도형의 인덱스 >> ";
}
