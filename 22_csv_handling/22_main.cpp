#include <iostream>
#include "22_csv.hpp"
using namespace std;

int main() {
	if (read_from_csv()) {
		cout << "Done!" << endl;
	} else {
		cerr << "Whoops!" << endl;
	}

	return 0;
}