#include <iostream>
#include "15_header.hpp"

using namespace std;

int main() {
	int a = 100;
	int b = 200;

	//	calling external functions from main
	cout << a << " + " << b << " = " << add(a, b) << endl;
	cout << a << " - " << b << " = " << subtract(a, b) << endl;
	cout << a << " * " << b << " = " << multiply(a, b) << endl;
	cout << a << " / " << b << " = " << divide(a, b) << endl;
	cout << a << " % " << b << " = " << modulo(a, b) << endl;

	return EXIT_SUCCESS;
}