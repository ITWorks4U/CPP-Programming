#include <iostream>
#include "overload02.hpp"
using namespace std;

CPoint::CPoint(double x, double y) {
	this->x = x;
	this->y = y;
}

CPoint::~CPoint() {}

double CPoint::getX() {
	return this->x;
}

double CPoint::getY() {
	return this->y;
}

void CPoint::setX(double x) {
	this->x = x;
}

void CPoint::setY(double y) {
	this->y = y;
}

CPoint CPoint::operator+(const CPoint& point) {			//	we're overwriting `+` for a shorter use instead of
	CPoint tmp(0.0F, 0.0F);									//	using an object, where each X-coordinate may be added
	tmp.x = this->x + point.x;								//	with another X-coordinate only, and each Y-coordinate
	tmp.y = this->y + point.y;								//	may be added with another Y-coordiante only

	return tmp;
}

int main() {
	CPoint point01(2,0);									//	point01 = {2,0}
	CPoint point02(10,12);									//	point02 = {10,12}
	CPoint point03(0,0);									//	point03 = {0,0}

	/*	normal usage:
	 *	point03.setX(point01.getX() + point02.getX());
	 *	point03.setY(point01.getY() + point02.getY());
	*/	
	point03 = point01 + point02;							//	let's update point03 → point03 = {12,12}
	cout << " point03 = {" << point03.getX() << "," << point03.getY() << "}" << endl;

	return 0;
}
