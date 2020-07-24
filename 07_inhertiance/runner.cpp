#include "inheritClass.hpp"
#include <iostream>
#include <new>
using namespace std;

int main() {
	CCube *cube01 = new CCube(2.0, 2.0, 2.0);
	CCube *cube02 = new CCube(5.0, 6.0, 7.0);
	CPyramid *pyramid = new CPyramid(4.0, 6.0, 4.0);
	CSphere *sphere = new CSphere(3.5);

	/*	cube operations		*/
	cube01->identifyClass();
	cout << " circumferece of cube01 = " << cube01->calculateCircumference() << endl;
	cout << " area of cube01 = " << cube01->calculateArea() << endl;
	cout << " volume of cube01 = " << cube01->calculateVolume() << endl;

	cube02->identifyClass();
	cout << " circumferece of cube02 = " << cube02->calculateCircumference() << endl;
	cout << " area of cube02 = " << cube02->calculateArea() << endl;
	cout << " volume of cube02 = " << cube02->calculateVolume() << endl;

	/*	pyramid operations	*/
	pyramid->identifyClass();
	cout << " circumferece of pyramid = " << pyramid->calculateCircumference() << endl;
	cout << " area of pyramid = " << pyramid->calculateArea() << endl;
	cout << " volume of pyramid = " << pyramid->calculateVolume() << endl;

	/*	sphere operations	*/
	sphere->identifyClass();
	cout << " circumferece of sphere = " << sphere->calculateCircumference() << endl;
	cout << " area of sphere = " << sphere->calculateArea() << endl;
	cout << " volume of sphere = " << sphere->calculateVolume() << endl;

	delete sphere;
	delete pyramid;
	delete cube02;
	delete cube01;

	return 0;
}
