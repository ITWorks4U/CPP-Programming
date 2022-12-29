#include <iostream>
using namespace std;

/*
	C/C++ comes with a set of defined
	macros / preprocessors, which can
	be used like:
*/

int main() {
	//	printing current file name and line number
	cout << "using file: \"" << __FILE__ << "\" on line: " << __LINE__ << endl;

	//	check, on which OS this application runs:
	#ifdef __MSDOS__
	cout << "Runs under MS DOS!" << endl;
	#elif __WIN32__ || __WIN64__
	cout << "Runs under MS Windows (32 or 64 bit)!" << endl;
	#elif __unix__
	cout << "Runs under UNIX/Linux!" << endl;
	#else
	cout << "Runs under any other OS!" << endl;
	#endif

	return 0;
}