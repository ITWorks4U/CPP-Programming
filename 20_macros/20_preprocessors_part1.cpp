#include <iostream>
using namespace std;

/*
	preprocessors are similar to macros and may
	control your application workflow
*/

#define		COMMAND

int main() {
	/*
		check, if COMMAND exists (a number is required, otherwise an error exists)
		for 0: condition check is false
		any number: condition check is true
	*/
	#if COMMAND 0
		cout << "COMMAND is defined." << endl;
	#endif

	//	check, if COMMAND is defined
	#ifdef COMMAND
		cout << "COMMAND is defined." << endl;
	#endif

	//	check, if COMMAND is undefined
	#ifndef COMMAND
		cout << "COMMAND is not defined." << endl;
	#endif

	#ifndef ABC
		cout << "ABC is not defined yet..." << endl;
	#endif

	return 0;
}