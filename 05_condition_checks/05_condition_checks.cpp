#include <iostream>
using namespace std;

/*
	condition checks are almost identical
	to C programming, however, in contrast
	to C programming you're using bool
	by default instead of integers

	false:	0 only
	true:	every other number	=>	will be converted to 1 only
*/

int main() {
	bool checker = true;

	if (checker == true) {										//	often used: if (checker) {...}
		cout << "condition is true" << endl;
	} else {													//	only in use, if the condition above
																//	is false
		cout << "condition is false" << endl;
	}

	//	opposite
	if (checker != true) {										//	often used: if (!checker) {...}
		cout << ">this< condition is true" << endl;
	} else {
		cout << ">this< condition is false" << endl;
	}

	bool expression = -3000;									//	What happens here?
	cout << "expression is marked as: " << expression << endl;

	return 0;
}