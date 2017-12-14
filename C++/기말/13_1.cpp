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
template <>		//함수템플릿을 char*형에 대해 특수화
char* max(char *a, char *b) {
	cout << "char*형 특수화!" << endl;
	return strlen(a) > strlen(b) ? a : b;
}
template <>		//함수템플릿을 const char*형에 대해 특수화
const char* max(const char *a, const char *b) {
	cout << "const char*형 특수화!" << endl;
	return strlen(a) > strlen(b) ? a : b;
}
int main(void) {
	/*ShowData<char, int>(68);
	ShowData<char, double>(68.9);*/
	cout << max(11, 15) << endl;
	cout << max("안녕하세요", "바보") << endl;
	char *str1 = "simple";
	char *str2 = "best";
	cout << max(str1, str2) << endl;

	return 0;
}