#include <iostream>
#include <string>

using namespace std;

int main(void) {
	string narr[5];
	int len = sizeof(narr) / sizeof(string);
	for (int i = 0; i < len; i++) {
		cout << "�̸� >> ";
		getline(cin, narr[i], '\n');
	}
	string latter = narr[0];
	for (int i = 0; i < len; i++) {
		if (latter < narr[i]) {
			latter = narr[i];
		}
	}
	
	cout << "������ ���� �ڿ� ������ ���ڿ��� " << latter << endl;
	
	return 0;
}