/*
	a way to write a file in C++

	hint:
	The "error handling" is pathetic,
	becuase in C++ this won't work
	as well as in C programming.

	In that case, we deal with that either way.
*/

#include <iostream>
#include <string>
#include <fstream>
using namespace std;

int main() {
	fstream fs;												//	alternative: ostream for "out stream" only
	fs.open("test.txt", ios_base::out);						//	opening file stream to open a file;
															//	if this file doesn't exist, it will be created
															//	otherwise the previous content will be replaced
															//	with the new content

															//	operation fails, if a directory instead of a file
															//	is given or you don't have access rights there
															//	-> no exception occurrs, however,
															//	youl'd be disappointed about the "reason"
	if (!fs.is_open()) {
		//	for any reason, why this file stream fails...
		cerr << "file can't be written... ¯\\_(ツ)_/¯" << endl;

		//	alternative way: using perror() function as used in C 
		// perror("File can't be written!");
		return 1;
	}

	//	how to write something to the file

	//	like to cout:	"write something to given file stream fs"
	fs << "How to write \"I'm sorry!\" 100,000 times:" << endl << endl;

	for(int i = 0; i < 100000; i++) {
		fs << i+1 << ": I'm sorry!" << endl;
	} 

	//	closing the file stream
	fs.close();

	/*
		hint: at any time any exception may occur here,
		therfore this code is a kind of mess, however,
		this shows you the basic usage of writing a file
		in C++
	*/

	return 0;
}