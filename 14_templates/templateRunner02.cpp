#include <iostream>
#include <new>
#include <stdexcept>
#include <exception>
#include "templateClass.hpp"
using namespace std;

int main() {
	int iVal01 = 123;
	int iVal02 = 753;					//	try to use: 0

	double dVal01 = 6.022136e23;
	double dVal02 = 1.6726231e-27;		//	try to use:	0.0

	CCalculator<int> *calcInt = new CCalculator<int>(iVal01, iVal02);
	CCalculator<double> *calcDouble = new CCalculator<double>(dVal01, dVal02);

	try {
		cout << " ***using integer values***" << endl;
		cout << " iVal01 = " << iVal01 << endl;
		cout << " iVal02 = " << iVal02 << endl << endl;

		cout << " add: " << calcInt->addNumbers() << endl;
		cout << " subtract: " << calcInt->subtractNumbers() << endl;
		cout << " multiply: " << calcInt->multiplyNumbers() << endl;
		cout << " divide: " << calcInt->divideNumbers() << endl;

		cout << endl << " ***using double values***" << endl;
		cout << " dVal01 = " << dVal01 << endl;
		cout << " dVal02 = " << dVal02 << endl << endl;

		cout << " add: " << calcDouble->addNumbers() << endl;
		cout << " subtract: " << calcDouble->subtractNumbers() << endl;
		cout << " multiply: " << calcDouble->multiplyNumbers() << endl;
		cout << " divide: " << calcDouble->divideNumbers() << endl;


	} catch (exception &e) {
		cerr << e.what() << endl;
	}

	delete calcDouble;
	delete calcInt;

	return 0;
}
