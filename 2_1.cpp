#include <iostream>

using namespace std;

int Add(int num) {
	int &ref = num;
	return ref+1;
}
int Change(int &num) {
	return num*(-1);
}

int main(void) {
	int num = 3;
	int &ref = num;
	cout << Add(num) << endl;
	cout << Change(ref) << endl;

	return 0;
}