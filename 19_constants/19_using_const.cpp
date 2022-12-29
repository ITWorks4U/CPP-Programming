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
	a constant expression has a fixed value depending
	on the given data type and this is unable to change
	on runtime, unless you're using nasty C-implementations :P
*/
const int	expression_const = 123;

int main() {
	cout << "constant expression: " << expression_const << endl;

	/*
		fun fact:

		in C a constant expression doesn't need a value;
		that's weired, because a constant expression requires
		a value on build time, however, in C that's possible,
		where "just" a warning appears
	*/

	return EXIT_SUCCESS;
}