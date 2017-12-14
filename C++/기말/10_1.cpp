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
	void show() {
		cout << "(" << x << "," << y << ")" << endl;
	}
	/*Point operator-(const Point&ref) {
		Point pos(x - ref.x, y - ref.y);
		return pos;
	}*/
	friend Point operator-(const Point &ref1, const Point &ref2);
};
Point operator-(const Point&r1, const Point&r2) {
	Point p(r1.x - r2.x, r1.y - r2.y);
	return p;
}
int main(void) {
	Point pos1(10, 5);
	Point pos2(5, 5);
	Point pos3 = pos1 - pos2;
	pos3.show();

	return 0;
}