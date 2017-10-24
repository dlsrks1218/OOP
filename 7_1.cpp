#include <iostream>

using namespace std;

class Rectangle {
private:
	int a, b;
public:
	Rectangle(int a1, int b1):a(a1), b(b1) {

	}
	void ShowAreaInfo() {
		cout << "¸éÀû : " << a*b << endl;
	}
};
class Square :public Rectangle {
private:
	int c;
public:
	Square(int c1):Rectangle(c1, c1) {
		c = c1;
	}
	void ShowAreaInfo() {
		Rectangle::ShowAreaInfo();
	}
};

int main(void) {
	Rectangle rec(4, 3);
	rec.ShowAreaInfo();

	Square sqr(7);
	sqr.ShowAreaInfo();


	return 0;
}