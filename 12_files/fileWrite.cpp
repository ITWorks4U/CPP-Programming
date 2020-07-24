/*	write content to a file	*/

#include <iostream>
#include <fstream>
#include <stdexcept>
#include <exception>
#include <string>
using namespace std;

enum {
	NORMAL_EXIT, INCORRECT_USAGE, IO_ERROR, CRITICAL_ERROR
};

int main(int argc, char **argv) {
	if (argc != 2) {
		cerr << " usage: " << argv[0] << " name_of_a_file.extension" << endl;
		return INCORRECT_USAGE;
	}

	cout << " Writing content to \"" << argv[1] << "\"." << endl;

	string content = " This text is now in given (text) file.\n Unlinke in C programming it's a better handling to read/write files with C++.";
	ofstream destination;
	destination.exceptions(ifstream::failbit);										//	← required to handle with I/O errors, e. g. try to write `content` to "accessDenied.txt"

	try {
		destination.open(argv[1], ios_base::out | ios_base::app);					//	we want to open a file to write content at the end of the openable file

		destination << content << endl;												//	this command allows us to write the content of `content` to the file
	} catch (ios_base::failure &e) {												//	an I/O error was detected
		cerr << " Error to write into a file: " << e.what() << endl;
		return IO_ERROR;
	} catch (exception &e) {														//	any other error occurred
		cerr << " Crtitcal error detected: " << e.what() << endl;
		return CRITICAL_ERROR;
	}

	destination.close();

	return NORMAL_EXIT;
}
