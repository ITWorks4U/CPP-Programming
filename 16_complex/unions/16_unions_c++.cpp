/*
	in C++ unions can be used elsewhere
*/
#include <iostream>
#include <string>
using namespace std;

union MyUnion {
	char sign;
	string word;											//	since string is here, ...
	
	MyUnion() {}											//	a constructor and
	~MyUnion() {}											//	a destructor is required

	void have_fun() {										//	functions can also defined here
		cout << "blah blah blah" << endl;
	}

	int get_sign() {
		return sign;
	}
};

int main() {
	MyUnion mu;

	cout << "amount of bytes for \"mu\": " << sizeof(mu) << endl;

	//	segmentation fault, because string and int are both modified
	/*
	mu.sign = 'A';
	mu.word = "ABC";

	cout <<	mu.sign		<< ", " << endl <<
			mu.word		<< ", "
		<< endl;
	*/

	mu.have_fun();											//	calling functions
	cout <<	mu.get_sign() << endl;
	return 0;
}