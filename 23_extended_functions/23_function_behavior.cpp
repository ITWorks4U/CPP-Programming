#include <iostream>
using namespace std;

/*
	In C++ a function without an argument isn't identical
	to C, because within the brackets a "void" keyword is
	given there, thus you can't call this function with
	any amount of any arguments, whereas in C this works.

	Because in C this function is defined as "function(...)".
	This allows you to call your function with any amount
	of arguments of any type.
*/

void function() {
	cout << "I was called!" << endl;
}

int main() {
	function();																				//	normal function call

	/*
	function(5);																			//	won't work, unless you're changing
	function("ABC");																		//	the function call
	function(753, "All ways leads to Rome.");
	*/

	return 0;
}