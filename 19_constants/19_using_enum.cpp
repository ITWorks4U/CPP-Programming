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
	using anonymous enumeration
	rareley used
*/
enum {
	expression_enum = 123
};

//	this can't be used for a constant expression
enum class Constant {
	VALUE = 42
};

int main() {
	cout << "constant expression: " << expression_enum << endl;

	//	can't be compiled, because there's no operator defined
	//	for cout by using an enum class element
	//	unless you're defining your own operator for that case
	// Constant c = Constant::VALUE;
	// cout << "also possible: " << c << endl;

	return EXIT_SUCCESS;
}