#include <iostream>

extern "C" {
	#include "my_math.h"
}

using namespace std;

int main() {
	int a = 10;
	int b = 20;

	cout << "a+b= " << add(a,b) << endl;
	cout << "a-b= " << subtract(a,b) << endl;
	cout << "a*b= " << multiply(a,b) << endl;
	cout << "a/b= " << divide(a,b) << endl;

	Complex *cmpx = new Complex();
	cmpx->real = 1.234;
	cmpx->img = -5.678;

	cout << "real = " << cmpx->real << ", img = " << cmpx->img << endl;
	delete cmpx;

	return 0;
}