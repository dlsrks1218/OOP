#include <iostream>
#pragma warning(disable:4996)

using namespace std;

int main(void) {
	int n;
	cout << "���� �Է� : ";
	cin >> n;
	for (int i = 1; i <= n; i++) {
		for (int j = 1; j <= 9; j++) {
			cout << i << "*" << j << "=" << i*j << endl;
		}
		cout << endl;
	}


	return 0;
}