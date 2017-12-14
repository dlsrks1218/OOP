#include <iostream>
using namespace std;

//template <class T1, class T2>
//void ShowData(double num) {
//	cout << (T1)num << ", " << (T2)num << endl;
//}
template <typename T>
T max(T a, T b) {
	return a > b ? a : b;
}
template <>		//�Լ����ø��� char*���� ���� Ư��ȭ
char* max(char *a, char *b) {
	cout << "char*�� Ư��ȭ!" << endl;
	return strlen(a) > strlen(b) ? a : b;
}
template <>		//�Լ����ø��� const char*���� ���� Ư��ȭ
const char* max(const char *a, const char *b) {
	cout << "const char*�� Ư��ȭ!" << endl;
	return strlen(a) > strlen(b) ? a : b;
}
int main(void) {
	/*ShowData<char, int>(68);
	ShowData<char, double>(68.9);*/
	cout << max(11, 15) << endl;
	cout << max("�ȳ��ϼ���", "�ٺ�") << endl;
	char *str1 = "simple";
	char *str2 = "best";
	cout << max(str1, str2) << endl;

	return 0;
}