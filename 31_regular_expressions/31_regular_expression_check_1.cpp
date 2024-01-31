/*
	Using regular expressions helps you to handle
	an expression in a smarter way, however, the usage
	of regular expressions might be a bit complicated.
*/

#include <iostream>
using namespace std;

int main() {
	/*
		A simple, but also a stupid way to check for a "number".
		Even tmp can hold a number for any input, caused by cin,
		and even it's known, that the input "0" results "not being a number",
		which is logically false, an undefined behavior occurs here, when you're entering
		at least 2 words.
	*/

	int tmp;
	cout << "Enter a number: ";

	cin >> tmp;

	if (tmp == 0) {
		cout << "Your input was not a number." << endl;
	} else {
		cout << "Your input was a number." << endl;
	}

	return 0;
}