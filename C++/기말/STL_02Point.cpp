#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

template <typename T>
class Point {
private:
	T xpos, ypos;
public:
	Point(T x = 0, T y = 0) :xpos(x), ypos(y) {

	}
	void ShowPosition() const {
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};

int main(void) {
	vector <Point<int>>v;
	v.push_back(Point<int>(1, 2));
	v.push_back(Point<int>(2, 3));
	for (int i = 0; i < v.size(); i++) {
		v[i].ShowPosition();
	}

	return 0;
}