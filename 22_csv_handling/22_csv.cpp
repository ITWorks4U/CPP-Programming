#include <iostream>
#include <string>
#include <fstream>
#include "22_csv.hpp"

using namespace std;

bool write_to_csv() {
	fstream fs;
	fs.open("test.csv", ios_base::out);

	//	hint: this "error handling" is a mess for C++
	//	and won't give you a detailed information of
	//	the received error, unless you're using C-functions,
	//	like perror()

	if (!fs.is_open()) {
		cerr << "¯\\_(ツ)_/¯" << endl;
		// perror("reason");														//	C-way to receive the detailed error here
		return false;
	}

	for(int i = 1; i <= 100000; i++) {
		fs << "i: " << i << ", i+5: " << i+5 << ", i*5: " << i*5 << ", i*i: " << i*i << endl;
	}

	fs.close();
	return true;
}

bool read_from_csv() {
	fstream fs;
	fs.open("output.csv", ios_base::in);

	if (!fs.is_open()) {
		cerr << "¯\\_(ツ)_/¯" << endl;
		return false;
	}

	string tmp;
	while(!fs.eof()) {
		getline(fs, tmp);
		cout << tmp << endl;
	}

	fs.close();
	return true;
}