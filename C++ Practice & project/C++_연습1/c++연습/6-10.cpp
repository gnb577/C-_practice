#include <iostream>
using namespace std;

class Math {
public:
	static int abs(int a) { return a > 0 ? a : -a; }
	static int max(int a, int b) { return (a > b) ? a : b; }
	static int min(int a, int b) { return (a > b) ? b : a; }
};

int main() {
	Math t;
	cout << t.abs(-5) << endl;
	cout << t.max(10, 8) << endl;
	cout << t.min(-3, -8) << endl;
}
