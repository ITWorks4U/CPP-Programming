/*
	Using regular expressions helps you to handle
	an expression in a smarter way, however, the usage
	of regular expressions might be a bit complicated.
*/

#include <iostream>
#include <regex>
#include <string>
#include <limits>

using namespace std;

/*
	Allows you the following input:
	Any characters between A-Z, a-z, 0-9, , and ' OR _empty_space_ => 0 - n-1 times
	!, ., ? => 0 - n-1 times

	So, you're also welcome to input nothing. This will also pass trough the filter.
*/
#define	REGEX_PATTERN	"^([A-Za-z0-9,']|\\s)*(!|\\.|\\?)*?$"

bool on_match(string expressionToCheck);

int main() {
	string input = "";
	cout << "Enter anything: ";
	getline(cin, input);
	cin.ignore(numeric_limits<streamsize>::max(), '\n');

	bool has_match = on_match(input);

	cout << "Your certain expression: \"" << input << "\" " << (has_match ? "passed" : "failed") << " trough the regular expression filter." << endl;

	return 0;
}

bool on_match(string expressionToCheck) {
	regex r(REGEX_PATTERN);
	return regex_match(expressionToCheck, r);
}