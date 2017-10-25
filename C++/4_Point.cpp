#include <iostream>
#include "Point.h"
using namespace std;

Point::Point(const int &xpos, const int &ypos)
{
	x = xpos;
	y = ypos;
}

int Point::GetX() const{
	return x;
}
int Point::GetY() const { 
	return y; 
}


bool Point::SetX(int xpos)
{
	return true;
	//・・
}
bool Point::SetY(int ypos)
{
	return true;
	//・・
}
