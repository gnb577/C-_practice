#pragma once
#include "Horses.h"

class HorseManagers {
	Horse* p; //���� ���� ���� ���� �����Ҵ��� �� �� ����� ������
	int* q; // random�Լ��� ���� ���� �� ��ŭ �̾Ƴ��� ���� ����� ������
	int* t;
	int horse_number; //�̻��
	int my_horse; // ���� ���� ����� ���� ��ȣ
public:
	HorseManager2(const int p, const int n); //���� �������� ��¸��� ���ڷ� �޾� ���������� �Լ��� ���� ������ �ϴ� ������
	void make_random_number(const int pop);
	void make_winner_flag(const int pop);
	void initial_winner_flag(const int pop);
	~HorseManager2();//���� �Ҵ��� ���� ������ �Ҹ���

};