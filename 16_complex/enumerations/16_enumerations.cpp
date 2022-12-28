#include <iostream>
using namespace std;

/*
	Enumerations are a set of integers
	from 0 to n-1, whereas each number
	represents an expression.

	By default an enumeration must not contain a duplicate
	expression, whereas multiple enumerations must
	also not contain at least one duplicate element.

	Every expression can also be set with a given
	start value.

	An enumeration must contain at least one element.

	Unlike in C in C++ an enumeration is a bit different.
*/

enum Status {
	OK, DEBUG, INFO, WARNING, ERROR, NOTHING 
};

//	defining an own datatype by using 'typedef'
typedef enum {
	ON, OFF
}ToggleSwitch;
 
//	in C++ enumeration classes allows you to
//	define a multiple element from an
//	another enumeration
enum class LogType {
	DEBUG, INFO, WARNING, ERROR, OK, NOTHING
} lt;

int main() {
	//	-----------
	//	Different amount of bytes? No!
	//	-----------
	//	for Windows: %llu, because sizeof there is unsigned long long
	printf("Status needs %lu bytes.\n", sizeof(enum Status));
	printf("lt (LogType) requires %lu bytes.\n", sizeof(lt));
	printf("ToggleSwitch requires %lu bytes.\n", sizeof(ToggleSwitch));

	//	-----------
	//	Status
	//	-----------
	Status s = OK;															//	in C++ 'enum' isn't required by default
	cout << "status = " << s << endl;										//	Surprised?

	//	valid in C, invalid in C++
	// for(Status s1 = OK; s1 <= NOTHING; s1++) {
	// 	cout << s1 << endl;
	// }

	//	alternative way for C++:
	initializer_list<Status> all_states = {OK, DEBUG, INFO, WARNING, ERROR, NOTHING};
	for(Status s1 : all_states) {
		cout << s1 << endl;
	}

	//	-----------
	//	LogType
	//	-----------
	//	accessing to an element of enumeration class
	LogType lt = LogType::OK;
	
	//however, this can't be printed out
	// cout << "lt has value: " << lt << endl;

	//	-----------
	//	custom data type
	//	-----------
	ToggleSwitch ts = ON;
	if (ts == ON) {
		cout << "ToggleSwitch is ON!" << endl;
	} else {
		cout << "ToggleSwitch is OFF!" << endl;
	}

	return EXIT_SUCCESS;
}