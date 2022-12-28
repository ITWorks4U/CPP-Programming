/*
	iterations are almost identical
	to C programming, however, you can
	a bit more
*/

#include <iostream>
using namespace std;

int main() {
	//	sequential loop	(runs, until given condition (middle) is no longer given)
	//	syntax:	for(initializer; condition; modification of initializer)
	for(int i = 0; i < 10; i++) {
		cout << i << endl;
	}

	//	sequential loop in reversal order
	for(int i = 9; i >= 0; i--) {
		cout << i << endl;
	}

	//	skipping a value
	for(int i = 0; i < 10; i++) {
		if (i == 5) {
			continue;													//	"just" skipping value number 5
		}

		cout << i << endl;
	}

	//	leaving loop
	for(int i = 0; i < 10; i++) {
		if (i == 5) {
			break;														//	leaving loop immediately
		}

		cout << i << endl;
	}
}