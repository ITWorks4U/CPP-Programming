#include <iostream>
using namespace std;

/*
	Default arguments allows you to set a default
	value for a certain argument. Can be very
	useful, however, you're bound on restrictions.
*/

void function() {
	cout << "I was called!" << endl;
}

/*
	Won't work, because which function will be called
	without using an argument? :o|

	void function(int a = 500) {
		cout << "I was called!" << endl;
	}
*/

/*
	Since at least one argument comes with a default
	argument, your function call can be "dynamically" used.
*/
int add(int a = 20, int b = 22) {
	return a + b;
}

int main() {
	function();																				//	normal function call

	cout << add(1,2) << endl;																//	a and b are given by call
	cout << add(1) << endl;																	//	just a is set, b is predefined
	cout << add() << endl;																	//	predefined values for a and b are in use

	return 0;
}