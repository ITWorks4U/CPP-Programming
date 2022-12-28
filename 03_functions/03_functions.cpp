/*
	simple defintion and usage of functions
*/

#include <iostream>
using namespace std;

/*
	definition of a function:
	[modifier] <datatype> <function name>([parameters: <datatype> <expression> [= predefined value]])
*/

//	void	:=	"nothing"	=>	void doesn't need a return value
void function1() {
	cout << "This is a void-function!" << endl;
}

//	other functions requires a return value depending on the data type
double function2() {
	//	not all numbers behind the comma returns here
	return 12345.6789;
}

int main() {
	cout << "The main function!" << endl;
	function1();
	cout << function2() << endl;

	return 0;
}