/*
	a way to read a file in C++

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
	fstream fs;												//	alternative: istream for "in stream" only
	fs.open("21_reading.cpp", ios_base::in);				//	opening file stream to open a file
															//	this file must exist, it mustn't be a
															//	directory and you should have accress
															//	rights, otherwise the operation fails
															//	-> no exception occurrs, however,
															//	youl'd be disappointed about the "reason"
	if (!fs.is_open()) {
		//	for any reason, why this file stream fails...
		cerr << "file can't be read... ¯\\_(ツ)_/¯" << endl;

		//	alternative way: using perror() function as used in C 
		// perror("File can't be read!");
		return 1;
	}

	//	how to read the file
	string tmp;
	while (!fs.eof()) {
		//	way one: read every singe word -> ineffective,
		//	because you're unable to read the file as expected
		//fs >> tmp;

		//	way two: read the full line, no matter, how much
		//	text is there
		getline(fs, tmp);

		//	output:
		cout << tmp << endl;
	}

	//	closing the file stream
	fs.close();

	/*
		hint: at any time any exception may occur here,
		therfore this code is a kind of mess, however,
		this shows you the basic usage of reading a file
		in C++
	*/

	return 0;
}