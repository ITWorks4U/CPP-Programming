/*
	basic string handling:
		see reading from keyboard
*/

#include <iostream>
#include <string>													//	contains string operations, too
using namespace std;

int main() {
	//	---------
	//	determine size of string
	//	---------
	string str = "Howdy! How're you?";
	cout << "amount of characters: " << str.length() << endl;
	cout << "amount of characters: " << sizeof(str) << endl;		//	What's going to print here?

	//	---------
	//	concatenation
	//	---------
	string word;
	word += str;
	cout << word;

	//	alternative way:
	string s;
	s.append(word);
	cout << s << endl;

	//	---------
	//	inserting
	//	---------
	s.insert(5, "aaaa");											//	inserting on position 5 "aaaa"
	cout << s << endl;

	//	---------
	//	erasing
	//	---------
	word.erase(3, 10);												//	erasing on position 3 the next 10 characters
	cout << word << endl;

	return 0;
}