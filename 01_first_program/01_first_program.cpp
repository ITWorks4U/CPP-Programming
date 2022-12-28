/*	importing required libraries	*/
#include <iostream>

/*	recommended to use functions, commands etc. very easy	*/
using namespace std;

/*	program entry point	*/
int main() {
	//	Every output is a "word".

	cout << "This is the first output!" << endl;

	/*
		cout, endl, ... are defined in a namespace of "std" => std::cout, ...
		without "using namespace std" std::cout << "text" << std::endl is required

		cout	:=	console output
		<<		:=	direction stream => "write something to console output"
		endl	:=	adding an end line => for C (printf()): \n

		Power of endl:	Depending on which system you're programming,
						it's required to know how to create a new line.
						for UNIX/Linux:	"just" \n
						for Windows:	\r\n
						for MacOS:		"just" \r

						endl automatically determines which correct
						format shall be used here
	*/

	//	printing numbers on console
			//	number			//	"word"
	cout << 123456 << endl << "123456" << endl;

	return 0;
}