/*
	while a condition is given,
	repeat it
*/

#include <iostream>
using namespace std;

int main() {
	int counter = 0;

	//	syntax:	while(condifion is true) {do something here}
	while (counter < 10000) {
		counter++;													//	required, otherwise the loop runs forever
																	//	or CTRL + C has been pressed
		cout << counter << endl;
	}

	//	never ending loop
	while(true) {}

	/*
		since while(true) above is given, every
		other code below is marked as "dead code",
		because this will never reach
	*/

	//	never doing anything
	while(false) {}

	return 0;
}