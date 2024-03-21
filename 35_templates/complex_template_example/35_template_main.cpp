#include "35_template_example.hpp"

/*	"solution 3"	*/
#include "35_template_example.cpp"

#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 15;

	double c = 3.141;
	double d = 4e12;

	Calculator<int> cInt;
	cout << "a + b = " << cInt.add(a, b) << endl;
	cout << "a - b = " << cInt.sub(a, b) << endl;
	cout << "a * b = " << cInt.mul(a, b) << endl;
	cout << "a / b = " << cInt.div(a, b) << endl;

	Calculator<double> cDouble;
	cout << "c + d = " << cDouble.add(c, d) << endl;
	cout << "c - d = " << cDouble.sub(c, d) << endl;
	cout << "c * d = " << cDouble.mul(c, d) << endl;
	cout << "c / d = " << cDouble.div(c, d) << endl;

	return 0;
}