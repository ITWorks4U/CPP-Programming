#include <iostream>
using namespace std;

/*
	Like in C, in C++ you're able to use a function, which
	holds a function as arguments. Rarely used in C++,
	more used in C only.

	In C it's often used for signal handling.
*/

int add(int a, int b) {
	return a + b;
}

/*
	This function requires a function of type int
	followed by two arguments as argument.

	*f represents a pointer, where the argument
	function is stored on runtime
*/
void funny_function(int (*f)(int, int)) {
	for(int i = 0; i < 10; i++) {
		cout << (*f)(i, i) << endl;
	}
}

int main() {
	//	the function argument "just" need the function name only
	funny_function(add);

	return 0;
}