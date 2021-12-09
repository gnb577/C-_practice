#include <iostream>
#include <string>
#include <fstream>
#include <vector>
#include <map>
#include <algorithm>
#include <time.h>
using namespace std;
char nat[100][100]; //받은 문장에서 나라를 분리
char cap[100][100]; //받은 문장에서 수도를 분리
int change_flag = 0; //바꾼 적이 있는지 없는지 확인하는 flag
int nation_count = 0; //몇개의 나라가 입력되었는지 확인
int upload_flag = 0; // upload가 되었는지 확인
int ans_count = 0;//정답수
int answer = 0;//문제수
double rate = 0; //정답수*100/문제수

class Nation
{
	string nation;
	string capital;
public:
	Nation()
	{
		nation = "국가";
		capital = "수도";
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

istream& operator>>(istream& is, Nation& data) //연산자 재정의
{
	string a;
	string b;
	cout << "새로 삽입할 나라를 입력해주세요 : ";
	getline(cin, a);
	cout << endl;
	cout << "해당 나라의 수도를 입력해주세요 : ";
	getline(cin, b);
	cout << endl;
	data.setNation(a); //입력받아서 변경시켜줌
	data.setCapital(b); 

	return is;
}

ostream& operator << (ostream& os,Nation& data) //연산자 재정의
{
	cout << data.getNation() << "나라의 수도는 " << data.getCapital() << "입니다" << endl;
	cout << endl;
	return os;
}

class NationManager
{
	vector<Nation> v2; //가변 변수
	vector<Nation>::iterator it2; // vector지정 포인터
	vector<Nation>::iterator it; // 조작 전 포인터 미사용
	//Nation* p;
	//map<string, string> m;
	int quiz_num;//미사용
	int ans_num;//미사용

public:
	NationManager() //필요시 구현하려고 했으나 미사용
	{
		quiz_num = 0;
		ans_num = 0;
	}
	void menu() //초기메뉴
	{
		while (1)
		{
			cout << "[1] 소스파일 업로드" << endl;
			cout << "[2] 정보 갱신" << endl;
			cout << "[3] 수도정보 검색" << endl;
			cout << "[4] 퀴즈" << endl;
			cout << "[5] 종료" << endl;
			int input=0;
			while (!(input >= 1 && input <= 5)) 
			{
				cout << "입력 : ";
				cin >> input;
				cin.clear();
				cin.ignore();
				if(!(input >= 1 && input <= 5))
				cout << "잘못된 입력입니다" << endl;
			}
			if (input == 5)
			{
				cout << "프로그램이 종료되었습니다..."<<endl;
				return;
			}
			switch (input) //input값에따라 업로드, 정보갱신, 탐색,퀴즈,종료가 실행
			{
				case 1: upload(); break;
				case 2: update(); break;
				case 3: search(); break;
				case 4: quiz(); break;
			default:
				cout << "잘못된 입력입니다" << endl;
				break;
			}
			cout << endl;
		}

	}
	void upload() //1번 업로드
	{
		ifstream fin("nation.txt"); //파일을 입력형으로 연다
		if (!fin)
		{
			cout << "파일을 열 수 없다." << endl;
			return;
		}

		int num = 0;
		char buf[100];
		while (fin.getline(buf, 99)) // 한줄씩 읽어서 나라 부분과 수도 부분을 나누어 저장
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
			/* 필요없음 내가 애초에 이렇게 입력을 안함
				for (it2 = v2.begin(); it2 != v2.end(); it2++)
				{
					Nation temp2 = *it2;
					if (nat[num] == temp2.getNation())
					{
						cout << "이미 존재하는 국가입니다. 다른 나라를 입력해주세요" << endl;
						continue;
					}
				}
				*/
			Nation temp(nat[num], cap[num]); //해당 nation 변수를 생성
			v2.push_back(temp); //그걸 vector에 집어넣음
			//m.insert(make_pair(nat[num], cap[num])); //map미사용
			nation_count++;//새로운 나라가 추가되었음
			//확인용
			//cout << buf << endl;
			//cout << nat[num] << endl;
			//cout << cap[num] << endl;

			num++; //다음 나라추가 하기 위해 num++
		}
		it = v2.end(); //미사용
		fin.close();//파일 닫기
		cout << "파일을 업로드 했습니다..." << endl;
		upload_flag = 1;//파일을 업로드 하였음 -> 업로드 안하면 다른 거 진행 불가
		cout << endl;
	}
	
	void update() //vector값의 1 .수도이름 수정하기 ,2. 새로운 나라 수도추가, 3. 나라 삭제, 종료조건 no, 4. 새로업데이트 된거를 nation txt에 업데이트
	{
		if (upload_flag == 0)
		{
			cout << "파일을 업로드하지 않아 불가합니다..." << endl; 
			cout << endl;
			return;
		}
		cout << "(1) 수도이름 수정 (2) 새로운 나라 추가 (3) 나라 삭제 (4) 소스파일 백업" << endl;
		int input=0;
		while (!(input >= 1 && input <= 4))
		{
			cin >> input;
			cin.clear();
			cin.ignore();
			if (!(input >= 1 && input <= 4))
			{
				cout << "잘못된 입력입니다" << endl;
			}
		}

		switch (input)
		{
		case 1: updateCapital(); break;
		case 2: addNation(); break;
		case 3: deleteNation(); break;
		case 4: updateSource(); break;
		default:
			cout << "잘못된 입력입니다" << endl;
			break;
		}
		cout << endl;
	}

	void updateCapital() //수도이름을 수정
	{

		cout << "나라를 입력하세요 : ";
		string input2;
		int idx = -1; 
		getline(cin, input2);
		cout << endl;
		for (it2 = v2.begin(); it2 != v2.end(); it2++) //처음부터 끝까지 뒤져서
		{
			Nation temp = *it2;
			idx++;
			if (temp.getNation() == input2) //입력한 나라가 존재할 경우 
			{
				cout << "바꿀 수도명을 적어주세요 : ";
				getline(cin, input2);
				//temp.setCapital(input2);
				v2[idx].setCapital(input2);
				cout << v2[idx].getNation() << "의 수도는 " << v2[idx].getCapital() << "로 변경되었습니다." << endl;
				change_flag = 1;
				return;
			}
		}
		cout << "검색한 나라가 목록에 없습니다." << endl;
		cout << endl;
	}
	void addNation() //나라 추가
	{
		Nation n;
		cin >>  n;
		int idx = -1;
		for (it2 = v2.begin(); it2 != v2.end(); it2++) //처음부터 끝까지 확인
		{
			Nation temp = *it2;
			if (n.getNation() == temp.getNation()) 
			{
				cout << "이미 존재하는 나라입니다." << endl;
				return;
			}
		}
		//해당 나라가 존재하지 않을 경우
		nation_count++; //나라가 추가됨
		change_flag = 2; //변경됬음을 알리는 flag
		v2.push_back(n); //vector push
		cout << "새로 삽입한 나라는 " << n.getNation() << "이고 수도명은 " << n.getCapital() << "이다." << endl;
	}
	void deleteNation()
	{
		string del;
		cout << "삭제할 나라를 입력해주세요: ";
		cin >> del;
		cin.clear();
		cin.ignore();
		cout << endl;
		for (it2 = v2.begin(); it2!=v2.end();it2++)
		{
			Nation temp = *it2;
			if (del == temp.getNation())//해당 나라가 존재할 경우 그 나라 삭제
			{
				v2.erase(it2);
				it2 = v2.end();//이유는 없지만 그냥 일단 옮겨줌
				change_flag = 3; //변경됬음을 알리는 flag
				nation_count--;//나라 갯수가 하나 줄어듬
				cout << del << "나라가 삭제되었습니다" << endl;
				cout << endl;
				return;
			}
		}
		cout << "삭제할 나라가 없습니다." << endl;
		cout << endl;
	}
	void updateSource() //업데이트
	{
		if (change_flag != 0)//변경점이 있을 경우
		{
		 //중요하게 봐주세요 중요하게 봐주세요~~
			ofstream fout;
			fout.open("nation.txt",ios::out); //***개중요****파일 열기 ->다만 내용 변경의 우려가 있어 할때는 nation2를 만들어서 하였음 - fout.open("nation2.txt",ios::out);
			if (!fout)
			{
				cout << "파일 여는 데 실패했습니다..." << endl;
			}
			for (it2 = v2.begin(); it2 != v2.end(); it2++) //처음부터 끝까지 다지우고 다시 적음
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
		cout << "바뀐 게 없습니다...." << endl; //바뀐게 없으니 그냥 끝냄
	}
	void search() // 3번 검색
	{
		if (upload_flag == 0)
		{
			cout << "파일을 업로드하지 않아 불가합니다..." << endl;
			return;
		}
		cout << "(1) 나라이름으로 개별 검색 (2) 나라정보 전체 출력" << endl;
		int input=0;
		while (!(input == 1 || input == 2))
		{
			cin >> input;
			cin.clear();
			cin.ignore();
			if (!(input == 1 || input == 2))
			{
				cout << "잘못된 입력입니다" << endl;
			}
		}
		switch (input)
		{
		case 1: searchCapital(); break;
		case 2: showall(); break;
		default:
			cout << "잘못된 입력입니다" << endl;
			break;
		}

	}
	void searchCapital()//cout 재정의로 나라이름 수도이름 한방에 출력
	{
		string nation;
		getline(cin, nation);//나라 입력후
		for (it2 = v2.begin(); it2 != v2.end(); it2++)
		{
			if ((*it2).getNation() == nation) //해당 나라가 존재하면
			{
				cout << (*it2); //나라 + 수도를 출력함
				return;
			}
		}
		cout << "존재하지 않는 국가입니다..." << endl;
	}
	void showall() //존재하는 모든 값을 보여줌
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
	void quiz() //랜덤으로 나라이름 나오면 객관식으로 1~4까지 해서 수도 맞추기 9누르면 종료 종료시 퀴즈 정답률 출력
	{
		if (upload_flag == 0)
		{
			cout << "파일을 업로드하지 않아 불가합니다..." << endl;
			return;
		}
		while (1)
		{
			int i = 0, j = 0, k = 0;
			srand((unsigned)time(0)); //난수생성기
			unsigned int time_t[4];

			Nation problem[4]; //국가 정보 저장
			string nation, capital; //국가 정보 저장

			int same_flag = 0; // 같은 보기가 있는지 확인
			int ans_flag = 0; //정답이 몇번인지 정하는 flag
			int ans = 0; //내가 정답으로 입력할 변수
		
			while (i != 4)
			{
				same_flag = 0;
				time_t[i] = rand() % nation_count;
				for (k = 0; k < i; k++) //중복이 존재하므로 아무것도 안함
				{
					if (time_t[k] == time_t[i])
					{
						same_flag = 1;
						break;
					}
				}
				if (same_flag == 0) //중복이 없을 경우 나라 저장
				{
					it2 = (v2.begin() + time_t[i]);
					nation = it2->getNation();
					capital = it2->getCapital();
					problem[i].setNation(nation);
					problem[i].setCapital(capital);
					i++;
				}
			}
			ans_flag = rand() % 4; //0~3생성
			cout << "문제 : " << problem[ans_flag].getNation() << "의 수도를 어디일까요?" << endl;
			for (j = 0; j < 4; j++) //문제제시
			{
				cout << j + 1 << "번 : " << problem[j].getCapital() << endl;
			}
			cout << "정답 : ";
			while (!(ans == 1 || ans == 2 || ans == 3 || ans == 4 || ans == 9))
			{
				cin >> ans;
				cin.clear();
				cin.ignore();
			}
			if (ans == 9) //9입력시 정답률 보여주고 탈출
			{
				if (answer == 0) //한문제도 안풀었을 시 0/0이 되서 강제로 0%로 뜨게함
				{
					cout << "정답률은 0% 입니다." << endl;
					return;
				}
				rate = ans_count*100 / answer; //정답률 변수
				cout << "정답률은 " << rate << "% 입니다." << endl;
				return;
			}
			answer++;
			if (ans == ans_flag + 1) //답이 맞았음
			{
				ans_count++; //맞은 count++
				cout << "정답입니다~" << endl;
			}
			else if (ans >= 1 && ans <= 4)
			{
				cout << "틀렸습니다" << endl;
			}
			cout << ans_count<<"개 중 " << answer <<" 맞았습니다." << endl;
			cout << endl;
		}
	}
};

int main()
{
	NationManager a;
	a.menu();
}