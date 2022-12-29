/*
	Macros are (very) powerful and
	very often used for C and
	mostly for C++, however,
	these offers you a bunch of
	problems, if you don't mind them.
*/

#include <iostream>
using namespace std;

/*	Macros are typeless! The '200' below does not often be an integer.	*/
#define		LENGTH		200

#undef		NOTHING123													//	undefinition of a non existing macro
																		//	for C/C++: no warning or error appears

void nonsense_function();

int main() {
	for(int i = 0; i < LENGTH; i++) {
		cout << i << endl;
	}

	//	won't work either, because "LENGTH" isn't an iterable object
	/*
		for(int i : LENGTH) {
		cout << i << endl;
	}
	*/

	nonsense_function();
	return 0;
}

void nonsense_function() {
	/*	What happens here?	*/
	#undef		LENGTH													//	undefine that macro
	#define		LENGTH		"ABC"										//	redefinition of "LENGTH" => C/C++: "just" a warning,
																		//	if "LENGTH" hasn't been undefined before
	cout << LENGTH << endl;
}