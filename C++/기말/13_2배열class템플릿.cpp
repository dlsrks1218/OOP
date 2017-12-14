#include <iostream>
#include <string>
using namespace std;

//템플릿 클래스 객체 생성 시 자료형 생략 불가
template<typename T>
class Point
{
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0) : xpos(x), ypos(y)
	{  }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	friend Point<int>operator+(const Point<int>&, const Point<int>&);
	friend ostream& operator<<(ostream& os, const Point<int>&ref);
};
Point<int>operator+(const Point<int>& pos1, const Point<int>& pos2) {
	return Point<int>(pos1.xpos + pos2.xpos, pos1.ypos + pos2.ypos);
}
ostream& operator<<(ostream& os, const Point<int>& ref) {
	os << '[' << ref.xpos << ',' << ref.ypos << ']' << endl;
	return os;
}
template <typename T>
class BoundCheckArray {
private:
	T *arr;
	int arrlen;
	BoundCheckArray(const BoundCheckArray& arr) {

	}
	BoundCheckArray& operator=(const BoundCheckArray& arr) {

	}
public:
	/*BoundCheckArray(int len);
	T& operator[](int idx);
	T operator[](int idx) const;
	int GetArrLen() const;
	~BoundCheckArray();*/
	BoundCheckArray(int len) :arrlen(len) {
		arr = new T[len];
	}
	T& operator[](int idx) {
		if (idx < 0 || idx >= arrlen) {
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	T operator[](int idx)const {
		if (idx < 0 || idx >= arrlen) {
			cout << "Array index out of bound exception" << endl;
			exit(1);
		}
		return arr[idx];
	}
	int GetArrLen()const {
		return arrlen;
	}
	~BoundCheckArray() {
		delete[]arr;
	}
};
int main(void) {
	BoundCheckArray<int> iarr(5);

	for (int i = 0; i<5; ++i)
		iarr[i] = (i + 1) * 11;

	for (int i = 0; i<5; ++i)
		cout << iarr[i] << endl;
	cout << "////////////////////" << endl << endl;

	Point<int>pos(3, 4);
	BoundCheckArray<Point<int>>oarr(2);
	oarr[0] = Point<int>(3, 1);
	oarr[1] = Point<int>(3, 11);
	for (int i = 0; i < 2; i++) 
		oarr[i].ShowPosition();
	cout << "////////////////////" << endl << endl;
	Point<int>pos1(2, 4);
	Point<int>pos2(2, 4);
	Point<int>pos3 = pos1 + pos2;
	cout << pos1 << pos2 << pos3;
	cout << "////////////////////" << endl << endl;
	/*BoundCheckArray<Point>oarr(2);
	oarr[0] = Point(3, 4);
	oarr[1] = Point(1, 2);
	for (int i = 0; i < 2; i++) {
		oarr[i].ShowPosition();
	}*/

	/*Point<int>pos1(3, 4);
	pos1.ShowPosition();
	Point<char>pos2('A', 'B');
	pos2.ShowPosition();
	Point<string>pos3("ABC", "DEF");
	pos3.ShowPosition();*/
	

	return 0;
}