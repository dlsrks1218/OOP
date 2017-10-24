#include <iostream>

using namespace std;

class SoSimple {
public:
	static int num1;
	static int num2;
public:
	SoSimple(int n){
	}
	static void Adder(int n) {
		num1 += n;
		num2 += n;
	}
};

int main(void) {
	int num1 = 10;
	int num2 = 20;

	SoSimple s(5);
	s.Adder(4);
	cout << num1 << " " << num2 << endl;

	return 0;
}