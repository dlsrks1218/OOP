#include <iostream>

using namespace std;
//�Լ����ø��� static������ ���ø��Լ����� �������̴�
template <typename T>
void ShowStaticValue(void) {
	static T num = 0;
	num += 1;
	cout << num << " ";
}
//template <>
//void ShowStaticValue<double>(void) {
//	static double num = 0;
//	num += 1;
//	cout << num << " ";
//}
int main(void) {
	ShowStaticValue<int>();
	ShowStaticValue<int>();
	cout << endl;
	ShowStaticValue<double>();
	ShowStaticValue<double>();
	cout << endl;

	return 0;
}