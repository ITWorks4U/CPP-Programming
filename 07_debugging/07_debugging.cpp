/*
	Since an IDE is in use, code debugging
	is easy. Just mark on a given line
	number a breakpoint to pause the
	application on runtime to check out,
	what's there.

	Outside of the IDE: use gdb.

	video link: https://www.youtube.com/watch?v=cmylZU7EWsI&list=PLwMeVY6dlAg1CcImRRrAG-FZJ9l6OgHmE&index=8
*/

#include <iostream>
using namespace std;

void recursion_function(int value) {
	if (value == 0) {
		cout << "It ends!" << endl;
	}

	//	Can you figure out, why this function never ends?
	recursion_function(value--);
}

int main() {
	int a = 100;
	recursion_function(a);

	cout << "You'll never see this text!" << endl;
	return 0;
}