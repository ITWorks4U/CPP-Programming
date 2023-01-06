#include <iostream>
#include <string>
using namespace std;

/*
	A function overload allows you to expand your
	given function with an amount of arguments
	for a specific type. With this option your
	function calls are now able to work.
*/

void function() {
	cout << "I was called!" << endl;
}

void function(int a) {
	cout << a << endl;
}

//	Who says, that this function overload is bound on given function data type?
bool function(string s) {
	return s.compare("ABC");
}

//	same here... :o)
int function(int year, string phrase) {
	cout << phrase << endl;
	return year;
}

int main() {
	function();																				//	normal function call

	function(5);																			//	extended function calls
	cout << function("ABC") << endl;
	cout << function(753, "All ways leads to Rome.") << endl;

	return 0;
}