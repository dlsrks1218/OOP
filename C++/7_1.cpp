#include <iostream>

using namespace std;

class Rectangle {
private:
	int x, y;
public:
	Rectangle(int x1, int y1) :x(x1), y(y1) {

	}
	void ShowAreaInfo() {
		cout << "¸éÀû : " << x*y << endl;
	}
};
class Square :public Rectangle {
private:
	int n;
public:
	Square(int n1) :Rectangle(n1, n1) {

	}
};

int main(void) {
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();
	
	return 0;
}