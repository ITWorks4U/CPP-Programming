#include <iostream>
#include <new>
#include "interface.hpp"
using namespace std;

int main() {
	//IGeometricObject *interface = new IGeometricObject();							//	← reminding: you can't create an instance of this abstract class
	CRectangle *rect = new CRectangle(2.5, 3.5);
	CSphere *sphere = new CSphere(4.56789);

	cout << " area of rect = " << rect->calculateArea() << endl;
	cout << " volume of rect = " << rect->calculateVolume() << endl;

	cout << " area of sphere = " << sphere->calculateArea() << endl;
	cout << " volume of sphere = " << sphere->calculateVolume() << endl;

	delete sphere;
	delete rect;

	return 0;
}
