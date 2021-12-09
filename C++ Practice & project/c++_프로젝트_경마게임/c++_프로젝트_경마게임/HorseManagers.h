#pragma once
#include "Horses.h"

class HorseManagers {
	Horses* p; //���� ���� ���� ���� �����Ҵ��� �� �� ����� ������
	int* q; // random�Լ��� ���� ���� �� ��ŭ �̾Ƴ��� ���� ����� ������
	int* t;
	int horse_number; //�̻��
	int my_horse; // ���� ���� ����� ���� ��ȣ
public:
	HorseManagers(const int p, const int n); // ���� �������� ��¸��� ���ڷ� �޾� ���������� �Լ��� ���� ������ �ϴ� ������
	void make_random_number(const int pop); // ���� �� ����
	void make_winner_flag(const int pop); // ����ڸ� ������ ���� flag
	void initial_winner_flag(const int pop); // winner_flag �ʱ�ȭ �Լ�
	void play(const int pop); // ���� ���� �Լ�
	void consider_winner(const int pop); //����� ������ �Լ�
	~HorseManagers();//���� �Ҵ��� ���� ������ �Ҹ���

};