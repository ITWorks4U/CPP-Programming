#include <iostream>
#include <string>
#include <regex>																				//	for regular expressions
using namespace std;

bool onNumber_check1(string s);
bool onNumber_check2(string s);

int main() {
	/*
		primitive way to read
		an integer from keyboard

		remember: everything is a "word"
	*/

	int number_to_hold;
	cout << "enter something: ";

	cin >> number_to_hold;
	cout << "your number: " << number_to_hold << endl;

	/*
		disadvantages:
			-	by entering anything outside of a number,
				0 only will be replaces to number_to_hold
			-	may also crash your application on
				runtime
		
		alternatives:
			-	using / writing a function, which checks,
				if the input is an integer
			-	using a regular expression
	*/

	string number1 = "123";
	string number2 = "-99999";
	string fakeNumber = "Hello!";

	//	check 1:
	cout << "Is \"" << number1 << "\" a number? " << onNumber_check1(number1) << endl;			//	valid
	cout << "Is \"" << number2 << "\" a number? " << onNumber_check1(number2) << endl;			//	invalid... Surprised?
	cout << "Is \"" << fakeNumber << "\" a number? " << onNumber_check1(fakeNumber) << endl;	//	invalid

	//	check 2:
	cout << "Is \"" << number1 << "\" a number? " << onNumber_check1(number1) << endl;			//	valid
	cout << "Is \"" << number2 << "\" a number? " << onNumber_check2(number2) << endl;			//	valid
	cout << "Is \"" << fakeNumber << "\" a number? " << onNumber_check2(fakeNumber) << endl;	//	invalid

	return 0;
}

bool onNumber_check1(string s) {																//	too complicated
	string::const_iterator it = s.begin();
	while (it != s.end() && isdigit(*it)) {
		++it;
	}

	return !s.empty() && it == s.end();
}

bool onNumber_check2(string s) {																//	using regular expression
	regex checker("^-?[0-9]*$");
	
	return regex_search(s, checker);
}