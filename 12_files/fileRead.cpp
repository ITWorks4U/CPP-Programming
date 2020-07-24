/*	read content from a file	*/

#include <iostream>
#include <fstream>														//	used for I/O operatios with files
#include <vector>														//	we want to store each line into a line field
#include <string>
#include <exception>
#include <stdexcept>
using namespace std;

enum {																	//	an anonymous enumeration to define a set of constants, where
	NORMAL_EXIT, INCORRECT_USAGE, IO_ERROR, CRITICAL_ERROR				//	"NORMAL_EXIT" starts with 0
};

int main(int argc, char **argv) {										//	comes from C programming; we're able to add n parameters to the program
	if (argc != 2) {													//	we only want two parameters only to run the example, where argv[0] is the program name itself
		cerr << " usage: " << argv[0] << " name_of_a_file.extension" << endl;
		return INCORRECT_USAGE;
	}

	fstream source;														//	used to handle with files; to read from files only you can also use ifstream
	vector<string> content;												//	hold words for each line
	string buffer;

	try {
		source.open(argv[1], ios_base::in);

		while (!source.eof()) {											//	while we're able to read content
			getline(source, buffer);									//	get current line
			content.push_back(buffer);									//	store content to the vector
		}

		for (unsigned int i = 0; i < content.size(); i++) {			//	print out
			cout << content[i] << endl;
		}

	} catch (ios_base::failure &e) {									//	an I/O error was detected
		cerr << " Error by reading a file: " << e.what() << endl;
		return IO_ERROR;
	} catch (exception &e) {											//	any other error occurred
		cerr << " Crtitcal error detected: " << e.what() << endl;
		return CRITICAL_ERROR;
	}

	source.close();														//	close file stream
	return NORMAL_EXIT;
}
