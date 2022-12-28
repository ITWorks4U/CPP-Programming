/*
	runs at least once,
	repeats an instruction,
	while a conditon is given
*/

#include <iostream>
using namespace std;

int main() {
	int counter = 0;

	/*
		syntax:	do {do something} while(condition is true);
		runs at least once, condition check is at the end
	*/

	do {
		cout << counter << endl;
		counter++;
	} while (counter < 100);

	do {
		//	never ending loop
	} while(true);

	//	since do-while(true) above exits,
	//	every instruction below is marked as "dead code"

	do {
		//	runs once only
	} while(false);

	return 0;
}