/*
	rareley used for C++

	allows you to jump to a
	mark, to "repeat" or "skip"
	instruction(s)

	causes a "spaghetti code"
*/

#include <iostream>
using namespace std;

int main() {
	int counter = 0;

	mark:												//	definition of a mark
	counter++;

	if (counter < 10) {
		goto mark;										//	jump to a certain mark
	}

	return 0;
}