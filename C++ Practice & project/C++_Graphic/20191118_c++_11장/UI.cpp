#include <iostream>
#include "UI.h"
using namespace std;

int UI::num = 0;
void UI::editor()
{
	cout << "�׷��� ������ �Դϴ�." << endl;
}
void UI::out_menu()
{
	cout << "����: 1, ����: 2, ��κ���: 3, �������: 4, ����: 5 >> ";
}
void UI::inserting()
{
	cout << "��: 1, ��: 2, �簢��: 3 >> ";
}
void UI::deleting()
{
	cout << "�����ϰ��� �ϴ� ������ �ε��� >> ";
}
