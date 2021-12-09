class PtData {
	int num;
	int* pt;       // 정수 포인터
public:
	PtData(const PtData& r);    
	PtData(int a, int b);
	~PtData();
	int getPtData();
};

//PtData::PtData(const PtData &r) { 디폴트 복사생성자 (앝은 복사)
//  num = r.num;
//  pt = r.pt;
//}
PtData::PtData(const PtData& r) {   // 깊은 복사생성자
	num = r.num;
	pt = new int;
	*pt = *r.pt;
}
PtData::PtData(int a, int b) : num(a) {
	pt = new int;
	*pt = b;
}

PtData::~PtData() {
	delete pt;
}
int PtData::getPtData() {
	return *pt;
}

int main() {
	PtData a(10, 20);
	PtData b(a);
	cout << b.getPtData() << endl;
}


int main() {
	PtData a(10, 20);
	PtData b(a);
	cout << b.getPtData() << endl;
}







