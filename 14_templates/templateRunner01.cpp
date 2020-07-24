#include <iostream>
#include <new>
#include "template01.hpp"
using namespace std;

int main() {
	int a = 14;
	int b = 7;

	float val = 1.256637e-11;
	float unit = 9.80665;

	CSemiTemplate *semi = new CSemiTemplate();
	cout << " maxinum (a,b) = " << semi->getMaximum(a, b) << endl;
	cout << " maxinum  (val, unit) = " << semi->getMaximum(val, unit) << endl;

	semi->printThatType(val);
	semi->printThatType(unit);

	delete semi;
	return 0;
}
