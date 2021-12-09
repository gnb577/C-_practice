#include"horse.h"

Horse::Horse() //�ʱ�ȭ
{
	horse_distance = 0;
}

void Horse::set(const int horse_number, const int _random_number) //���� �̵��Ÿ��� �����ϰ� �����ϴ� �Լ�
{
	horse_distance = horse_distance + _random_number;
	if (horse_distance >= 20) //�Ÿ��� 20�� �ʰ��ϸ� 20���� �����ϰ���
	{
		horse_distance = 20;
	}
	this->horse_number = horse_number;
}

int Horse::get() //20�� �����ߴ����� �Ǻ��ؼ� ���߿� �Լ��� �����ų �� ����� get�Լ�
{
	return horse_distance;
}

void Horse::print_distance(int horse_distance) //�̵��� �Ÿ��� ǥ������ �Լ�
{
	for (int i = 0; i < horse_distance; i++)
	{
		cout << "--";
	}
}

void Horse::make_line() // ����� Ʋ ���� �Լ�
{
	cout << "====================================================" << endl;
}

void Horse::show() //���� ��ȣ�� ���� ǥ���ϴ� �Լ�
{
	cout << horse_number + 1 << "| "; //�迭�� 0���� �����ϳ� �� ��ȣ�� 1�����ʹϱ�
	print_distance(horse_distance);
	cout << "(  )=> " << horse_distance << endl;
}
