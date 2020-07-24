/*	using an anonymous namespace	*/
#include <iostream>
using namespace std;

/*
 *	Anonymous namespaces are directly usable in the same program and are used for declaring unique identifiers.
 *	It also avoids making global static variables. In C programming you just defined global variables.
*/
namespace {
	int localVariable = 1;									//	you may set your local variable
}

void changeLocalVariable(int value);

void changeLocalVariable(int value) {						//	Let's change the value!
	localVariable = ((3 * localVariable) + value);
}

int main() {
	cout << " local variable = " << localVariable << endl;

	changeLocalVariable(2);
	cout << " local variable = " << localVariable << endl;

	return 0;
}
