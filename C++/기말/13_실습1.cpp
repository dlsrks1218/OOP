#include <iostream>

using namespace std;

template <typename T>
T SumArray(T arr[], T len) {
	T sum = 0;
	for (int i = 0; i < len; i++) {
		sum += arr[i];
	}
	return sum;
}
int main(void) {
	int iarr[5] = { 1,2,3,4,5 };
	double darr[5] = { 1.1, 2.2, 3.3, 4.4, 5.5 };
	cout << SumArray(iarr, 5) << endl;
	cout << SumArray<double>(darr, 5) << endl;
	//cout << SumArray(darr, 5) << endl;
}