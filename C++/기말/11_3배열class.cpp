#include <iostream>

using namespace std;
class Point {
private:
	int x, y;
public:
	Point() {

	}
	Point(int x1, int y1) {
		x = x1;
		y = y1;
	}
};
class BoundCheckPointArray {
private:
	Point *arr;
	int arrlen;
	BoundCheckPointArray(const BoundCheckPointArray& arr) {

	}
	BoundCheckPointArray& operator=(const BoundCheckPointArray& arr) {

	}
public:
	BoundCheckPointArray(int len) :arrlen(len) {
		arr = new Point[len];
	}
	Point& operator[](int idx) {
		if (idx < 0 || idx >= arrlen) {
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	Point operator[](int idx)const {
		if (idx < 0 || idx >= arrlen) {
			cout<< "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int GetArrLen()const {
		return arrlen;
	}
	~BoundCheckPointArray() {
		delete[]arr;
	}
};

int main(void) {
	BoundCheckPointArray arr(3);
	arr[0] = Point(3, 4);
	arr[1] = Point(4, 5);
	arr[2] = Point(5, 6);
	for (int i = 0; i < arr.GetArrLen(); i++)
		cout << arr[i];

	return 0;
}