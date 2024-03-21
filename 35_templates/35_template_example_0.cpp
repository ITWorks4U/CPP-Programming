/*
	Templates allows you to reduce function / class redundancies and
	also offers you a more clean code. These templates can be interpreted
	as a "shape", which allows to work with any data type in theory.

	But you should know, that not every data type can be used for anything.
*/

#include <iostream>
using namespace std;

/*
	In OOP languages, like C++, Java, C#, Python, ...
	you can overwrite functions to handle with different
	data types, like:
*/
int getMaximum(int first, int second) {
	if (first > second) {
		return first;
	}

	return second;
}

double getMaximum(double first, double second) {
	if (first > second) {
		return first;
	}

	return second;
}

int main() {
	int a = 10;
	int b = 15;

	double c = 3.141;
	double d = 4e12;

	cout << "a (" << a << ") or b (" << b << "): " << getMaximum(a, b) << endl;
	cout << "c (" << c << ") or d (" << d << "): " << getMaximum(c, d) << endl;

	return 0;
}