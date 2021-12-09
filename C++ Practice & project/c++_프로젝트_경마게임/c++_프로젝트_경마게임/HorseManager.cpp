#pragma once
#include "HorseManager.h"

HorseManager::HorseManager(const int pop, const int n)
{
	p = new Horse[pop]; //���� ������ ��ŭ ��ü ����
	my_horse = n; //���� �����ϴ� ���� ��ȣ

	srand(unsigned(time(NULL))); //time����� �̿��� ���������� ����ϰ� �ֱ����� �ð��� ����ϱ� ���� Ÿ�̸� ����
	q = new int[pop];//�� ������ ���� ���ڸ� �����ؼ� ������ ����
    t = new int[pop]; // ����� ǥ���� ����

	for (int i = 0; i < pop; i++)
	{
		t[i] = 0; //��� flag �ʱ�ȭ
	}

	int timer_counter = 1; //Time: �� �κп��� �� ����Ŭ �� ������ ���ڸ� +1���� �Լ�

	while (1)
	{
		if (clock() % 500 == 0) //0.5�ʸ��� �� ����Ŭ�� ������
		{

			cout << endl << "Time : " << timer_counter << endl;
			int flag = 0;
			p[0].make_line(); //Ʋ �����ϰ�
			for (int i = 0; i < pop; i++) //�׸��� �Լ�
			{
				q[i] = rand() % 6; //���� �� ���� 0~5����
				p[i].set(i,q[i]); //i�� ��� ������ ,q[i]�� ������ �������� ������ ���� �̵��Ÿ��� ����
				p[i].show(); //�� ��ȣ & �� ����
				p[i].get(); //���� ���������� �Ǻ��ϱ� ���� distance���� �޾ƿ�

				if (p[i].get() == 20)//20�� �Ѵ� �ֵ��� ��� �Ǻ��ϸ鼭 ���� ���� ������ �ָ� �Ǻ��ϴ� ����
				{
					flag++; //flag�� ��� ���� �� �������� ���� �Ǻ��ϱ� ���� flag�� ����
					t[i] = t[i]+1; //���� ���� 20�� �����ߴ����� �Ǻ��ϱ� ���� ����
				}

			}

			p[0].make_line(); //�ٽ� Ʋ ����
			timer_counter++; //time: ���ڰ� ����

			if (flag == pop) //��� ������ 20���� �����ϸ� Ż���� �� �ְ� flag�� ����
			{
				break;
			}
		}
	}

	int max = 0;
	for (int i = 0; i < pop; i++) // ���� ���� ���� 20�� ������ �ְ� ���� ���� Ŭ ���̴� 20�� �ʰ��� �������� ��� +1�� ���־����ϱ�
	{
		
		if (max < t[i]) // ���� ū ���� ã�´�
		{
			max = t[i];
		}
	}

	if (max == t[n-1]) //����ȣ�� ���� �迭������ 1�̾ƴ� 0���� �����̹Ƿ� n-1�� ���־ t[n-1]���� max�� ������ 1������ ������ ��Ÿ��
	{
		cout << "���ϵ帳�ϴ�! ����� �¸��ϼ̽��ϴ�." << endl;
	}
	else
		cout << "����� �й��ϼ̽��ϴ�. :(" << endl;
}

HorseManager::~HorseManager() //�Ҹ���
{
	delete[] p; //pointer ��ü
	delete[] q; // random�Լ� ������ ���� pointer
	delete[] t; // max�� ã������ ���� counter������ ���� pointer
	//���� free����
	//cout << "����� �Ҹ���" << endl; //�Ҹ��� Ȯ�ο� ���
}
