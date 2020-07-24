#include <iostream>
#include <string>
#include "sizeOf.hpp"
using namespace std;

int main() {
	cout << " size of bool: " << sizeof(bool) << " byte(s)" << endl;
	cout << " size of short: " << sizeof(short) << " byte(s)" << endl;
	cout << " size of int: " << sizeof(int) << " byte(s)" << endl;
	cout << " size of long: " << sizeof(long) << " byte(s)" << endl;
	cout << " size of string: " << sizeof(string) << " byte(s)" << endl;
	cout << " size of char: " << sizeof(char) << " byte(s)" << endl;
	cout << " size of float: " << sizeof(float) << " byte(s)" << endl;
	cout << " size of double: " << sizeof(double) << " byte(s)" << endl;
	cout << " size of unsigned short: " << sizeof(unsigned short) << " byte(s)" << endl;
	cout << " size of unsigned int: " << sizeof(unsigned int) << " byte(s)" << endl;
	cout << " size of unsigned long: " << sizeof(unsigned long) << " byte(s)" << endl;
	cout << " size of unsigned long long: " << sizeof(unsigned long long) << " byte(s)" << endl;

	cout << " ************************************" << endl;

	cout << " size of union: " << sizeof(UExample) << " byte(s)" << endl;
	cout << " size of struct: " << sizeof(SExample) << " byte(s)" << endl;
	cout << " size of enum: " << sizeof(EExample) << " byte(s)" << endl;
	cout << " size of class: " << sizeof(CExample) << " byte(s)" << endl;

	cout << " ************************************" << endl;

	cout << " size of union: " << sizeof(U) << " byte(s)" << endl;
	cout << " size of struct: " << sizeof(S) << " byte(s)" << endl;
	cout << " size of enum: " << sizeof(E) << " byte(s)" << endl;
	cout << " size of class: " << sizeof(C) << " byte(s)" << endl;

	return 0;
}
