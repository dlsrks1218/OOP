#include <iostream>

using namespace std;

class Point {
private:
	int x, y;
public:
	Point(int x1, int y1) {
		x = x1;
		y = y1;
	}
	/*Point operator-(const Point&ref) {
	Point pos(x - ref.x, y - ref.y);
	return pos;
	}*/
	friend Point operator-(const Point &ref1);
	friend bool operator==(const Point &ref1, const Point &ref2);
	friend bool operator!=(const Point &ref1, const Point &ref2);
	friend ostream& operator<<(ostream&, const Point&);
	friend istream& operator>>(istream&, Point&);	//ref값이 변하므로 const X
};

Point operator-(const Point&r1) {
	Point p(r1.x*(-1), r1.y*(-1));
	return p;
}
bool operator==(const Point &ref1, const Point &ref2) {
	if (ref1.x == ref2.x && ref1.y == ref2.y)
		return true;
	else
		return false;
}
bool operator!=(const Point &ref1, const Point &ref2) {
	if (ref1.x == ref2.x && ref1.y == ref2.y)
		return false;
	else
		return true;
}
ostream& operator<<(ostream& os, const Point &ref) {
	os << '[' << ref.x << ',' << ref.y << ']' << endl;
	return os;
}
istream& operator>>(istream& is, Point &ref) {	//ref값이 변하므로 const X
	cout << "x, y 좌표 입력 : ";
	cin >> ref.x >> ref.y;
	
	return is;
}
int main(void) {
	Point pos1(10, 5);
	Point pos2(5, 5);
	
	Point pos3 = -pos1;
	cout << pos3;
	//pos3.show();
	Point pos4 = -pos2;
	cout << pos4;
	//pos4.show();

	if (pos1 == pos2) {
		cout << "true!" << endl;
	}
	else
		cout << "false!" << endl;
	
	cin >> pos1;
	cout << pos1;

	return 0;
}