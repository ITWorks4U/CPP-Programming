#include <iostream>
#include <string>
#include <limits>														//	for numeric_limits
using namespace std;

int main() {
	string content;
	cout << "enter something: ";

	//	reads until the first space character has been detected
	// cin >> content;

	//	reading until the enter key ('\n') has been detected
	//	allows to read multiple words
	getline(cin, content);
	cout << "content contains: " << content << endl;

	/*	huge mistake:	using cin.clear() to "clear" the buffer	*/
	cin.clear();														//	cleans error flags only, if any
	cin.ignore(numeric_limits<streamsize>::max(), '\n');				//	cleans the whole buffer
																		//	a second enter key press is required here

	return 0;
}