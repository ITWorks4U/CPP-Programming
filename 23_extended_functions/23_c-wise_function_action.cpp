#include <iostream>
#include <cstdarg>																		//	required for certain functions, data types etc.
using namespace std;

/*
	How to use a function C-like.
	Attention: An undefined behavior appears,
	if you don't mind your own set trap.
*/

void function(int n, ...) {
	cout << "-------------" << endl;
	va_list vector;																		//	using a vector argument
	va_start(vector, n);																//	initialize the vector with n arguments

	for(int i = 0; i < n; i++) {
		cout << va_arg(vector, int) << endl;											//	receive current element -> will be converted
																						//	to an integer, even this element IS NOT AN INTEGER
																						//	=> causes an undefined behavior
		//	fun fact: by using void * you'll see
		//	the address of the given value
		//cout << va_arg(vector, void *) << endl;

		//	What will happen here?
		//cout << va_arg(vector, double) << endl;
	}

	va_end(vector);																		//	releasing vector
	cout << "-------------" << endl;
}

int main() {

	//	extended function call
	function(10, 0,1,2,3,4,5,6,7,8,9);													//	using the next 10 arguments for our purpose
	function(4, 0,1,2,3,4,5,6,7,8,9);													//	using the first 4 arguments only

	//	undefined behavior confirmed
	function(20);																		//	What happens here?
	function(1, "ABC");																	//	And here?
	function(123.456, 1337, 42, 9001);													//	And there?

	return 0;
}