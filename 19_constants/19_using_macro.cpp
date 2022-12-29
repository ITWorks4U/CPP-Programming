/*
	in C/C++ there're
	tree different ways
	to create and use
	constants, whereas
	macros are often
	used for a
	constant expression
*/

#include <iostream>
using namespace std;

/*
	Very often used: a macro as a constant
	expression, however, a macro is typeless!

	In other words: 123 doesn't always be an integer!
*/
#define		expression_macro	123

int main() {
	cout << "constant expression: " << expression_macro << endl;

	/*
		macros are very popular for constant expressions,
		however, these have a lot of disadvantages
	*/

	return EXIT_SUCCESS;
}