#include <iostream>

using namespace std;

class SoSimple {
private:
	static int num1;
	static int num2;
public:
	SoSimple(int n){
	}
	static void Adder(int n) {
		num1 += n;
		num2 += n;
	}
	int getNum1() {
		return num1;
	}
	int getNum2() {
		return num2;
	}
};
int SoSimple::num1 = 10;
int SoSimple::num2 = 20;

int main(void) {
	SoSimple s(5);
	s.Adder(5);
	cout << s.getNum1() << " " << s.getNum2() << endl;

	return 0;
}