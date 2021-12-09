#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <time.h>
using namespace std;
char nat[100][100]; //���� ���忡�� ���� �и�
char cap[100][100]; //���� ���忡�� ������ �и�
int change_flag = 0; //�ٲ� ���� �ִ��� ������ Ȯ���ϴ� flag
int nation_count = 0; //��� ���� �ԷµǾ����� Ȯ��
int upload_flag = 0; // upload�� �Ǿ����� Ȯ��
int ans_count = 0;//�����
int answer = 0;//������
double rate = 0; //�����*100/������

class Nation
{
	string nation;
	string capital;
public:
	Nation()
	{
		nation = "����";
		capital = "����";
	}

	Nation(string _nation, string _capital)
	{
		nation = _nation;
		capital = _capital;
	}
	void setNation(string _nation)
	{
		nation = _nation;
	}
	void setCapital(string _capital)
	{
		capital = _capital;
	}
	string getNation()
	{
		return nation;
	}
	string getCapital()
	{
		return capital;
	}
	friend istream& operator>>(istream& is, const Nation& data);
	friend ostream& operator<<(ostream& os, const Nation& data);
};

istream& operator>>(istream& is, Nation& data) //������ ������
{
	string a;
	string b;
	cout << "���� ������ ���� �Է����ּ��� : ";
	getline(cin, a);
	cout << endl;
	cout << "�ش� ������ ������ �Է����ּ��� : ";
	getline(cin, b);
	cout << endl;
	data.setNation(a); //�Է¹޾Ƽ� ���������
	data.setCapital(b); 

	return is;
}

ostream& operator << (ostream& os,Nation& data) //������ ������
{
	cout << data.getNation() << "������ ������ " << data.getCapital() << "�Դϴ�" << endl;
	cout << endl;
	return os;
}

class NationManager
{
	vector<Nation> v2; //���� ����
	vector<Nation>::iterator it2; // vector���� ������
	vector<Nation>::iterator it; // ���� �� ������ �̻��
	//Nation* p;
	//map<string, string> m;
	int quiz_num;//�̻��
	int ans_num;//�̻��

public:
	NationManager() //�ʿ�� �����Ϸ��� ������ �̻��
	{
		quiz_num = 0;
		ans_num = 0;
	}
	void menu() //�ʱ�޴�
	{
		while (1)
		{
			cout << "[1] �ҽ����� ���ε�" << endl;
			cout << "[2] ���� ����" << endl;
			cout << "[3] �������� �˻�" << endl;
			cout << "[4] ����" << endl;
			cout << "[5] ����" << endl;
			int input=0;
			while (!(input >= 1 && input <= 5)) 
			{
				cout << "�Է� : ";
				cin >> input;
				cin.clear();
				cin.ignore();
				if(!(input >= 1 && input <= 5))
				cout << "�߸��� �Է��Դϴ�" << endl;
			}
			if (input == 5)
			{
				cout << "���α׷��� ����Ǿ����ϴ�..."<<endl;
				return;
			}
			switch (input) //input�������� ���ε�, ��������, Ž��,����,���ᰡ ����
			{
				case 1: upload(); break;
				case 2: update(); break;
				case 3: search(); break;
				case 4: quiz(); break;
			default:
				cout << "�߸��� �Է��Դϴ�" << endl;
				break;
			}
			cout << endl;
		}

	}
	void upload() //1�� ���ε�
	{
		ifstream fin("nation.txt"); //������ �Է������� ����
		if (!fin)
		{
			cout << "������ �� �� ����." << endl;
			return;
		}

		int num = 0;
		char buf[100];
		while (fin.getline(buf, 99)) // ���پ� �о ���� �κа� ���� �κ��� ������ ����
		{
			int flag = 0; int j = 0;
			for (int i = 0; i < strlen(buf); i++)
			{
				if (buf[i] == ';')
				{
					flag = 1;
					continue;
				}
				if (flag == 1)
				{
					cap[num][j] = buf[i];
					j++;
				}
				if (flag == 0)
				{
					nat[num][i] = buf[i];
				}
			}
			/* �ʿ���� ���� ���ʿ� �̷��� �Է��� ����
				for (it2 = v2.begin(); it2 != v2.end(); it2++)
				{
					Nation temp2 = *it2;
					if (nat[num] == temp2.getNation())
					{
						cout << "�̹� �����ϴ� �����Դϴ�. �ٸ� ���� �Է����ּ���" << endl;
						continue;
					}
				}
				*/
			Nation temp(nat[num], cap[num]); //�ش� nation ������ ����
			v2.push_back(temp); //�װ� vector�� �������
			//m.insert(make_pair(nat[num], cap[num])); //map�̻��
			nation_count++;//���ο� ���� �߰��Ǿ���
			//Ȯ�ο�
			//cout << buf << endl;
			//cout << nat[num] << endl;
			//cout << cap[num] << endl;

			num++; //���� �����߰� �ϱ� ���� num++
		}
		it = v2.end(); //�̻��
		fin.close();//���� �ݱ�
		cout << "������ ���ε� �߽��ϴ�..." << endl;
		upload_flag = 1;//������ ���ε� �Ͽ��� -> ���ε� ���ϸ� �ٸ� �� ���� �Ұ�
		cout << endl;
	}
	
	void update() //vector���� 1 .�����̸� �����ϱ� ,2. ���ο� ���� �����߰�, 3. ���� ����, �������� no, 4. ���ξ�����Ʈ �ȰŸ� nation txt�� ������Ʈ
	{
		if (upload_flag == 0)
		{
			cout << "������ ���ε����� �ʾ� �Ұ��մϴ�..." << endl; 
			cout << endl;
			return;
		}
		cout << "(1) �����̸� ���� (2) ���ο� ���� �߰� (3) ���� ���� (4) �ҽ����� ���" << endl;
		int input=0;
		while (!(input >= 1 && input <= 4))
		{
			cin >> input;
			cin.clear();
			cin.ignore();
			if (!(input >= 1 && input <= 4))
			{
				cout << "�߸��� �Է��Դϴ�" << endl;
			}
		}

		switch (input)
		{
		case 1: updateCapital(); break;
		case 2: addNation(); break;
		case 3: deleteNation(); break;
		case 4: updateSource(); break;
		default:
			cout << "�߸��� �Է��Դϴ�" << endl;
			break;
		}
		cout << endl;
	}

	void updateCapital() //�����̸��� ����
	{

		cout << "���� �Է��ϼ��� : ";
		string input2;
		int idx = -1; 
		getline(cin, input2);
		cout << endl;
		for (it2 = v2.begin(); it2 != v2.end(); it2++) //ó������ ������ ������
		{
			Nation temp = *it2;
			idx++;
			if (temp.getNation() == input2) //�Է��� ���� ������ ��� 
			{
				cout << "�ٲ� �������� �����ּ��� : ";
				getline(cin, input2);
				//temp.setCapital(input2);
				v2[idx].setCapital(input2);
				cout << v2[idx].getNation() << "�� ������ " << v2[idx].getCapital() << "�� ����Ǿ����ϴ�." << endl;
				change_flag = 1;
				return;
			}
		}
		cout << "�˻��� ���� ��Ͽ� �����ϴ�." << endl;
		cout << endl;
	}
	void addNation() //���� �߰�
	{
		Nation n;
		cin >>  n;
		int idx = -1;
		for (it2 = v2.begin(); it2 != v2.end(); it2++) //ó������ ������ Ȯ��
		{
			Nation temp = *it2;
			if (n.getNation() == temp.getNation()) 
			{
				cout << "�̹� �����ϴ� �����Դϴ�." << endl;
				return;
			}
		}
		//�ش� ���� �������� ���� ���
		nation_count++; //���� �߰���
		change_flag = 2; //��������� �˸��� flag
		v2.push_back(n); //vector push
		cout << "���� ������ ����� " << n.getNation() << "�̰� �������� " << n.getCapital() << "�̴�." << endl;
	}
	void deleteNation()
	{
		string del;
		cout << "������ ���� �Է����ּ���: ";
		cin >> del;
		cin.clear();
		cin.ignore();
		cout << endl;
		for (it2 = v2.begin(); it2!=v2.end();it2++)
		{
			Nation temp = *it2;
			if (del == temp.getNation())//�ش� ���� ������ ��� �� ���� ����
			{
				v2.erase(it2);
				it2 = v2.end();//������ ������ �׳� �ϴ� �Ű���
				change_flag = 3; //��������� �˸��� flag
				nation_count--;//���� ������ �ϳ� �پ��
				cout << del << "���� �����Ǿ����ϴ�" << endl;
				cout << endl;
				return;
			}
		}
		cout << "������ ���� �����ϴ�." << endl;
		cout << endl;
	}
	void updateSource() //������Ʈ
	{
		if (change_flag != 0)//�������� ���� ���
		{
		 //�߿��ϰ� ���ּ��� �߿��ϰ� ���ּ���~~
			ofstream fout;
			fout.open("nation.txt",ios::out); //***���߿�****���� ���� ->�ٸ� ���� ������ ����� �־� �Ҷ��� nation2�� ���� �Ͽ��� - fout.open("nation2.txt",ios::out);
			if (!fout)
			{
				cout << "���� ���� �� �����߽��ϴ�..." << endl;
			}
			for (it2 = v2.begin(); it2 != v2.end(); it2++) //ó������ ������ ������� �ٽ� ����
			{
				Nation temp = *it2;
				fout << temp.getNation();
				fout << ';';
				fout << temp.getCapital();
				fout << "\n";
			}
			change_flag = 0;
			return;
		}
		cout << "�ٲ� �� �����ϴ�...." << endl; //�ٲ�� ������ �׳� ����
	}
	void search() // 3�� �˻�
	{
		if (upload_flag == 0)
		{
			cout << "������ ���ε����� �ʾ� �Ұ��մϴ�..." << endl;
			return;
		}
		cout << "(1) �����̸����� ���� �˻� (2) �������� ��ü ���" << endl;
		int input=0;
		while (!(input == 1 || input == 2))
		{
			cin >> input;
			cin.clear();
			cin.ignore();
			if (!(input == 1 || input == 2))
			{
				cout << "�߸��� �Է��Դϴ�" << endl;
			}
		}
		switch (input)
		{
		case 1: searchCapital(); break;
		case 2: showall(); break;
		default:
			cout << "�߸��� �Է��Դϴ�" << endl;
			break;
		}

	}
	void searchCapital()//cout �����Ƿ� �����̸� �����̸� �ѹ濡 ���
	{
		string nation;
		getline(cin, nation);//���� �Է���
		for (it2 = v2.begin(); it2 != v2.end(); it2++)
		{
			if ((*it2).getNation() == nation) //�ش� ���� �����ϸ�
			{
				cout << (*it2); //���� + ������ �����
				return;
			}
		}
		cout << "�������� �ʴ� �����Դϴ�..." << endl;
	}
	void showall() //�����ϴ� ��� ���� ������
	{
		for (it2 = v2.begin(); it2 != v2.end(); it2++)
		{
			Nation temp = *it2;
			cout << temp.getNation();
			cout << " - ";
			cout << temp.getCapital();
			cout << "\n";
		}
	}
	void quiz() //�������� �����̸� ������ ���������� 1~4���� �ؼ� ���� ���߱� 9������ ���� ����� ���� ����� ���
	{
		if (upload_flag == 0)
		{
			cout << "������ ���ε����� �ʾ� �Ұ��մϴ�..." << endl;
			return;
		}
		while (1)
		{
			int i = 0, j = 0, k = 0;
			srand((unsigned)time(0)); //����������
			unsigned int time_t[4];

			Nation problem[4]; //���� ���� ����
			string nation, capital; //���� ���� ����

			int same_flag = 0; // ���� ���Ⱑ �ִ��� Ȯ��
			int ans_flag = 0; //������ ������� ���ϴ� flag
			int ans = 0; //���� �������� �Է��� ����
		
			while (i != 4)
			{
				same_flag = 0;
				time_t[i] = rand() % nation_count;
				for (k = 0; k < i; k++) //�ߺ��� �����ϹǷ� �ƹ��͵� ����
				{
					if (time_t[k] == time_t[i])
					{
						same_flag = 1;
						break;
					}
				}
				if (same_flag == 0) //�ߺ��� ���� ��� ���� ����
				{
					it2 = (v2.begin() + time_t[i]);
					nation = it2->getNation();
					capital = it2->getCapital();
					problem[i].setNation(nation);
					problem[i].setCapital(capital);
					i++;
				}
			}
			ans_flag = rand() % 4; //0~3����
			cout << "���� : " << problem[ans_flag].getNation() << "�� ������ ����ϱ��?" << endl;
			for (j = 0; j < 4; j++) //��������
			{
				cout << j + 1 << "�� : " << problem[j].getCapital() << endl;
			}
			cout << "���� : ";
			while (!(ans == 1 || ans == 2 || ans == 3 || ans == 4 || ans == 9))
			{
				cin >> ans;
				cin.clear();
				cin.ignore();
			}
			if (ans == 9) //9�Է½� ����� �����ְ� Ż��
			{
				if (answer == 0) //�ѹ����� ��Ǯ���� �� 0/0�� �Ǽ� ������ 0%�� �߰���
				{
					cout << "������� 0% �Դϴ�." << endl;
					return;
				}
				rate = ans_count*100 / answer; //����� ����
				cout << "������� " << rate << "% �Դϴ�." << endl;
				return;
			}
			answer++;
			if (ans == ans_flag + 1) //���� �¾���
			{
				ans_count++; //���� count++
				cout << "�����Դϴ�~" << endl;
			}
			else if (ans >= 1 && ans <= 4)
			{
				cout << "Ʋ�Ƚ��ϴ�" << endl;
			}
			cout << ans_count<<"�� �� " << answer <<" �¾ҽ��ϴ�." << endl;
			cout << endl;
		}
	}
};

int main()
{
	NationManager a;
	a.menu();
}