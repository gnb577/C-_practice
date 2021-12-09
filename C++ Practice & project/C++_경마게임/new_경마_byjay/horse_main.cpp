#include"horse.h"
#include"HorseManager.h"

#define min_horse 2
#define max_horse 5

int main()
{
	cout << "경마 게임 시작!" << endl;
	int h_population, h_num; //h_population이 몇 마리로 h_num가 내가 응원하는 말
	cout << "몇 마리의 말로 플레이 하시겠습니까?" << endl;
	while (1)
	{
		cin >> h_population; //말의 마리 수를 선택한다
		if (cin.fail()) // c++는 민감한 언어이기에 다른 type형의 인자를 집어 넣으면 무한 루프에 빠지므로 먼저 cin이 가능 한지의 여부 파악
		{
			cout << "int형이 아닌 다른 형이 입력 되었습니다. 2~5사이의 정수형을 입력해 주세요." << endl;
			cin.clear(); //잘못된 경우이면 안의 에러비트를 초기화 해줌으로서 무한루프에 안빠지게 도와준다
			cin.ignore(256, '\n'); //아직 cin버퍼에 값이 살아있기 때문에 ignore를 통해 입력버퍼의 값을 초기화해준다
			continue;
		}
		if (h_population < min_horse || h_population > max_horse) //2~5사이를 벗어나는 수가 나오면 에러메시지
		{
			cout << "말의 숫자가 범위를 초과하였습니다. 다시 입력해주세요." << endl;
		}
		else //아니면 계속 진행
		{
			break;
		}
	}
	cout << "몇 번째 말을 응원하시겠습니까?" << endl;
	while (1)
	{
		cin >> h_num; //응원하는 말의 번호
		if (cin.fail()) // c++는 민감한 언어이기에 다른 type형의 인자를 집어 넣으면 무한 루프에 빠지므로 먼저 cin이 가능 한지의 여부 파악
		{
			cout << "int형이 아닌 다른 형이 입력 되었습니다. 1~" << h_population << "사이의 정수형을 입력해 주세요." << endl;
			cin.clear(); //잘못된 경우이면 안의 에러비트를 초기화 해줌으로서 무한루프에 안빠지게 도와준다
			cin.ignore(256, '\n'); //아직 cin버퍼에 값이 살아있기 때문에 ignore를 통해 입력버퍼의 값을 초기화해준다
			continue;
		}
		if (h_num < 1 || h_num > h_population) //1~말 마리수 이내의 범위 만 허용하고 아니면 에러메시지
		{
			cout << "응원하는 말이 없는 말 입니다. 1번부터 " << h_population << "번까지 다시 입력해주세요." << endl;
		}
		else
		{
			break;
		}
	}

	HorseManager horse_play(h_population, h_num);
	return 0;
}

