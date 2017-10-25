#include <iostream>

using namespace std;

class SoSimple {
private:
	int num1;
	int num2;
public:
	SoSimple(int n1, int n2) :num1(n1) {
		num2 = n2;
	}
};
int main(void) {
	SoSimple s();
	
	return 0;
}