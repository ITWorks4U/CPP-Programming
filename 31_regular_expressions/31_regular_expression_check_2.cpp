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
	allows the following inputs:
	
	any decimal number: optionally starting with a -/+ sign
	this could be an integer or floating point number
	-OR-
	any hexadecimal number: starting with 0x or 0X optionally,
	followed by A-F, a-f, 0-9 and optionally with the letter H or h at the end
	-OR-
	any binary number: starting with 0b or 0B, followed by 0 or 1 1 - n times
	-OR-
	any octal number: starting with o or O, followed by a character between 0-7 1 - n times

*/
#define	REGEX_PATTERN	"^(-|\\+)?[0-9]+(,|\\.[0-9]+)?|(0x|0X)?[A-Fa-f0-9]+(H|h)?|(0b|0B)[01]+|(o|O)[0-7]+$"

bool on_match(string expressionToCheck);

int main() {
	string input = "";
	cout << "Enter a number: ";
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