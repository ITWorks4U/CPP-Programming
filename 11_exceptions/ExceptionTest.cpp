/*	simple exception provocation	*/
#include <iostream>
#include <exception>																	//	holds the super class exception
#include <stdexcept>																	//	holds a set of derived classes, like invalid_argument, which is a part of a logic_error
#include "ExceptionTest.hpp"
using namespace std;

double divideNumbers(int numerator, int denominator);

double divideNumbers(int numerator, int denominator) {									//	divide a number by 0 is not allowed
	if (denominator == 0) {																//	we may check, if the second number is 0,
		CMathError mathError(" Are you mad? You can't divide a number by zero!!!");		//	thus we can create our own exception message by our own exception class
		throw mathError;																//	by throwing this exception
	}

	return ((double) numerator / (double) denominator);
}

int main() {
	try {																				//	to assume that anything could create anywhere an exception
		cout << " 2/4 = " << divideNumbers(2, 4) << endl;								//	inside of the try block everything is in a `protected mode`
		cout << " 3/0 = " << divideNumbers(3, 0) << endl;
	} catch (invalid_argument &e) {
		cerr << " invalid argument detected: " << e.what() << endl;						//	e.what() → tells you what was wrong
	} catch (CMathError &err) {
		cerr << err.getErrorMessage() << endl;
	} catch (exception &e) {															//	whenever any other exception has occurred → the super class exception should be
		cerr << " error detected: " << e.what() << endl;								//	the last caughtable exception, because this will caught every sub exception, too
		return -1;																		//	in this case we want to terminate the program with -1
	}

	cout << " Normal instructions are there... " << endl;

	return 0;
}
