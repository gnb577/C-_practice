#pragma once
#include<iostream>
#include<string>
#include<cstring>
#include<cstdlib>
#include<ctime>

using namespace std;
class Horse
{
	int horse_distance; //random���� �޾Ƴ� ������ ���� �̵��� �Ÿ��� ���� ����
	int horse_number; //�ش� ���� ��ȣ�� ���� ����
public:
	Horse();//horse�� �⺻distance�� 0���� �ʱ�ȭ
	void set(const int horse_number, const int _random_number); //�� ������ distance���� �ٲپ��� �Լ�
	void print_distance(int horse_distance); //���������� ���� �� �Ÿ��� print���ִ� �Լ�
	int get(); //���� �� ���� ���� ������ �Լ�
	void show(); //(n��)�� �Ѹ����� ���� �Ÿ��� �׸� �Լ�
	void make_line(); // Ʋ �׸��� �Լ�
};