#include <iostream>
using namespace std;

/*
	Trying to call a function, which is defined after
	the function call. In C "just" a warning appears,
	where the compiler interprets the next possible
	function as the called function, however,
	in C++ this sample won't work, because it's
	illegal to call a function, which is defined
	later.

	Two ways to fix that issue:
		(1)	define a function prototype before
			the function is going to call
		(2)	the called function is defined
			before it's called
*/

/*	function prototype (for C++ strictly required)	*/
// void test_function();									//	without a prototype, it won't work

int main() {
	//	compiler error:
	//	error: ‘test_function’ was not declared in this scope
	test_function();										//	calling the function
}

void test_function() {										//	is declared here...
	cout << "Hi there!" << endl;
}