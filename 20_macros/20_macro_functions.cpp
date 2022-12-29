#include <iostream>
using namespace std;

/*
	Macro functions allows you to write less code for a big result,
	however, if you don't mind, you'll receive a logic error.
	Logic errors can't be detected by any compiler. On runtime
	you MIGHT see the difference in contrast to the expectation.
*/

#define		QUBIC_WRONG(X) (X * X * X)										//	Missing brackets causes a wrong result!
#define		QUBIC_CORRECT(X) ((X) * (X) * (X))

int qubic_function(int number) {
	return number * number * number;
}

int main() {
	int a = 123;
	int b = 61;

	cout << "wrong : (" << a << " - " << b << ")^3 = " << QUBIC_WRONG(a-b) << endl;
	cout << "correct : (" << a << " - " << b << ")^3 = " << QUBIC_CORRECT(a-b) << endl;
	cout << "by function : (" << a << " - " << b << ")^3 = " << qubic_function(a-b) << endl;

	return EXIT_SUCCESS;
}