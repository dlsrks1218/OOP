#include <iostream>

using namespace std;
void divide(int num1, int num2) {
	if (num2 == 0 || num2<0)
		throw num2;
}
int main(void) {
	int num1, num2;
	cout << "�� ���� ���� �Է� : ";
	cin >> num1 >> num2;

	try {
		divide(num1, num2);
		cout << "�������� �� : " << num1 / num2 << endl;
		cout << "�������� ������ : " << num1%num2 << endl;
	}
	catch (int expn) {
		cout << "������ " << expn << "�� �� �� �����ϴ�" << endl;
		cout << "���α׷��� �ٽ� �����ϼ���" << endl;
	}
	catch (char ch) {
		cout << "���� " << ch << "�� �ԷµǾ����ϴ�" << endl;
		cout << "���α׷��� �ٽ� �����ϼ���" << endl;
	}
	cout << "End of Main" << endl;

	return 0;
}