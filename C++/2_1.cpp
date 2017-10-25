#include <iostream>

using namespace std;

int Add(int &num) {
	return num + 1;
}
int Change(int &num) {
	return num*(-1);
}
int main(void) {
	int a = 4;
	int b = 10;
	int &aref = a;
	int &bref = b;
	cout<<Add(aref)<<endl;
	cout<<Change(bref)<<endl;

	return 0;
}