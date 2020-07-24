/*	basic input / output in C++	*/
#include <iostream>												//	required to use cout, cin, cerr, endl
#include <cstdio>												//	you may also use <stdio.h> → for printf(), fprintf(), ....
#include <climits>												//	to use limits for numeric data types
#include <cstdlib>												//	required for function strtol()
using namespace std;											//	allows to use cout << .... << endl instead of using std::cout << .... << std::endl;

int main() {
	/*
	 *	cout	:=	console output															(equal to: printf(), fprintf(), puts(), ...)
	 *	cin		:=	console input															(equal to: scanf(), fscanf(), fgets(), ...)
	 *	endl	:=	end of the current line, where the next output starts on the new line	(equal to '\n')
	 *	cerr	:=	console error output													(equal to: fprintf(), perror(), ...)
	 *	<<, >>	:=	operators which allows you to determine from where to where an
	 *				input stream is going to use
	*/

	int value = 42;
	long inVal;

	/*	typical output in C/C++	*/
	cout << " C++: value = " << value << endl;					//	output in C++
	printf(" C: value = %d\n", value);							//	output in C

	/*	typical input in C/C++	*/
	cout << " Enter a number: ";								//	without an endl; the next input/output comes on the current line
	cin >> inVal;												//	input in C++ → like scanf(), fscanf(), ... it may be possible that some input
	cout << " C++: inVal = " << inVal << endl;					//	from keyboard is still left, therefore you could get in trouble for the next
	cin.ignore(LONG_MAX, '\n');									//	input stream, where this code allows you to flush the input buffer

	/*	→ cin.ignore(int nbrOfCharacters, char charDestination);		*/

	cout << " Again: enter a number: ";
	char buffer[127];
	fgets(buffer, 127, stdin);									//	read up to 127 characters from keyboard and store them to buffer
	inVal = strtol(buffer, NULL, 0);							//	convert the input into a number while each character in buffer is an alphanumeric character
	cout << " C: inVal = " << inVal << endl;

	return 0;
}
