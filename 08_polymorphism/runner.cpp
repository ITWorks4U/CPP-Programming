#include <iostream>
#include <new>
#include "polymorphism.hpp"
using namespace std;

int main() {
	CGeometricObject *geo = new CGeometricObject();
	CRectangle *rect = new CRectangle(10.0, 14.5);
	CCircle *circle = new CCircle(7.11);
/*
	cout << " area of rect = " << rect->calculateArea() << endl;
	cout << " area of circle = " << circle->calculateArea() << endl;
*/

	geo = dynamic_cast<CGeometricObject *>(rect);
	cout << " area of rect = " << geo->calculateArea() << endl;

	geo = dynamic_cast<CGeometricObject *>(circle);
	cout << " area of circle = " << geo->calculateArea() << endl;


	delete circle;
	delete rect;
	delete geo;

	return 0;
}
