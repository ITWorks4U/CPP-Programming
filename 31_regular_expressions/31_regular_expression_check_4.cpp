/*	An alternative way to check against a number from an input.
	However, this is a nasty way to do this.
*/

#include <iostream>
#include <string>
#include <limits>

using namespace std;
using String = string;

bool on_match(String expressionToCheck);

int main() {
	String input;
	cout << "Enter a number: ";
	
	getline(cin, input);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	bool has_match = on_match(input);
	cout << "Your certain expression: \"" << input << "\" " << (has_match ? "passed" : "failed") << " trough the alternate expression filter." << endl;

	return 0;
}

bool on_match(String expressionToCheck) {
	/*
		Well, you could do this by using an iterator to compare
		each character, if this is a digit, however, by using a
		negative number, floating point value or else, this
		won't success for you.
	*/

	String::const_iterator it = expressionToCheck.begin();
	while (it != expressionToCheck.end() && isdigit(*it)) {
		++it;
	}

	return !expressionToCheck.empty() && it == expressionToCheck.end();
}