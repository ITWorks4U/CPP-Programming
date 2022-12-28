#include <iostream>
#include <string>
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

	return 0;
}