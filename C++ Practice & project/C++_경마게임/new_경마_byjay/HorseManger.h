#pragma once
#include "horse.h"

class HorseManager {
	Horse* p; //���� ���� ���� ���� �����Ҵ��� �� �� ����� ������
	int* q; // random�Լ��� ���� ���� �� ��ŭ �̾Ƴ��� ���� ����� ������
	int* t;
	int horse_number; //�̻��
	int my_horse; // ���� ���� ����� ���� ��ȣ
public:
	HorseManager(const int p, const int n); //���� �������� ��¸��� ���ڷ� �޾� ���������� �Լ��� ���� ������ �ϴ� ������
	~HorseManager();//���� �Ҵ��� ���� ������ �Ҹ���

};