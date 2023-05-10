#include <iostream>
#include <limits>
using namespace std;

/*
	Correct casting makes your expression more valuable,
	e. g. for a higher precision or for a casting.
*/

#define	LIGHT_YEAR	9.461e15

int main() {
	//------------------------------
	//	precision
	//------------------------------
	typedef numeric_limits<double> dbl;																		//	using this template to modify
																											//	the precision of each double variable

	const double euler_expression = 2.1828182845904523536;
	cout.precision(dbl::max_exponent10);																	//	in combination with a precision...
	cout << fixed << euler_expression << endl;																//	...and fixed we have a clearly
																											//	precision output for each double varoable
	//------------------------------
	//	casting
	//------------------------------
	cout << LIGHT_YEAR << endl;																				//	a "normal" output
	cout << (int) LIGHT_YEAR << endl;																		//	can be used, but it causes a overflow
																											//	for an integer => you don't exactly know,
																											//	which value is going to print here

	cout << static_cast<int>(LIGHT_YEAR) << endl;															//	C++ comes with unique casting operations,
																											//	like static_cast<type>(origin). This allows
																											//	you in case of an error to find the cause
																											//	much easier, however, the result is identical
																											//	to the "normal" casting attempt like above.
	//------------------------------

	/*
		another casting options, which comes with C++:
			reinterpret_cast<type_to_cast>(type);
	 		-	unsave cast; allows you always to cast a type into another type,
				where the compiler might not compile the program
			-	often used for pointers
			dynamic_cast<type_to_cast>(type);
	 		-	usually used for classes and polymorphism; allows you to cast a
				type into another type on runtime, however, use this with care
	 		const_cast<type_to_cast>(type);
	 		-	hardly used casting option; allows you to cast a const*
				into another type and vice versa; use this with care
	*/

	return 0;
}