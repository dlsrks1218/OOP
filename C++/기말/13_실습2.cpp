#include <iostream>

using namespace std;

template <typename T>
void SwapData(T &ref1, T &ref2) {
	T tmp = ref1;
	ref1 = ref2;
	ref2 = tmp;
}

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{  }
	void ShowPosition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
};


int main(void) {
	Point pos1(1, 2);
	Point pos2(6, 7);
	SwapData(pos1, pos2);
	pos1.ShowPosition();
	pos2.ShowPosition();

	return 0;
}