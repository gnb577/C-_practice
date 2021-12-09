#include"horse.h"
#include"HorseManager.h"

#define min_horse 2
#define max_horse 5

int main()
{
	cout << "�渶 ���� ����!" << endl;
	int h_population, h_num; //h_population�� �� ������ h_num�� ���� �����ϴ� ��
	cout << "�� ������ ���� �÷��� �Ͻðڽ��ϱ�?" << endl;
	while (1)
	{
		cin >> h_population; //���� ���� ���� �����Ѵ�
		if (cin.fail()) // c++�� �ΰ��� ����̱⿡ �ٸ� type���� ���ڸ� ���� ������ ���� ������ �����Ƿ� ���� cin�� ���� ������ ���� �ľ�
		{
			cout << "int���� �ƴ� �ٸ� ���� �Է� �Ǿ����ϴ�. 2~5������ �������� �Է��� �ּ���." << endl;
			cin.clear(); //�߸��� ����̸� ���� ������Ʈ�� �ʱ�ȭ �������μ� ���ѷ����� �Ⱥ����� �����ش�
			cin.ignore(256, '\n'); //���� cin���ۿ� ���� ����ֱ� ������ ignore�� ���� �Է¹����� ���� �ʱ�ȭ���ش�
			continue;
		}
		if (h_population < min_horse || h_population > max_horse) //2~5���̸� ����� ���� ������ �����޽���
		{
			cout << "���� ���ڰ� ������ �ʰ��Ͽ����ϴ�. �ٽ� �Է����ּ���." << endl;
		}
		else //�ƴϸ� ��� ����
		{
			break;
		}
	}
	cout << "�� ��° ���� �����Ͻðڽ��ϱ�?" << endl;
	while (1)
	{
		cin >> h_num; //�����ϴ� ���� ��ȣ
		if (cin.fail()) // c++�� �ΰ��� ����̱⿡ �ٸ� type���� ���ڸ� ���� ������ ���� ������ �����Ƿ� ���� cin�� ���� ������ ���� �ľ�
		{
			cout << "int���� �ƴ� �ٸ� ���� �Է� �Ǿ����ϴ�. 1~" << h_population << "������ �������� �Է��� �ּ���." << endl;
			cin.clear(); //�߸��� ����̸� ���� ������Ʈ�� �ʱ�ȭ �������μ� ���ѷ����� �Ⱥ����� �����ش�
			cin.ignore(256, '\n'); //���� cin���ۿ� ���� ����ֱ� ������ ignore�� ���� �Է¹����� ���� �ʱ�ȭ���ش�
			continue;
		}
		if (h_num < 1 || h_num > h_population) //1~�� ������ �̳��� ���� �� ����ϰ� �ƴϸ� �����޽���
		{
			cout << "�����ϴ� ���� ���� �� �Դϴ�. 1������ " << h_population << "������ �ٽ� �Է����ּ���." << endl;
		}
		else
		{
			break;
		}
	}

	HorseManager horse_play(h_population, h_num);
	return 0;
}

