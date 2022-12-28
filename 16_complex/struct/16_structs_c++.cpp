/*
	structs are more comfortable in contrast
	to union, however, in C++ structs can be used elsewhere
*/
#include <iostream>
#include <string>
using namespace std;

struct MyStruct {
	char sign;
	string word;											//	since string is here, ...
	
	MyStruct() {}											//	a constructor and
	~MyStruct() {}											//	a destructor is required

	void have_fun() {										//	functions can also defined here
		cout << "blah blah blah" << endl;
	}

	int get_sign() {
		return sign;
	}
};

int main() {
	MyStruct ms;

	cout << "amount of bytes for \"ms\": " << sizeof(ms) << endl;

	//	unlike to union in struct no segmentation fault appears,
	//	because string and int are separated modified
	ms.sign = 'A';
	ms.word = "ABC";

	cout <<	ms.sign		<< ", " << endl <<
			ms.word		<< ", "
		<< endl;

	ms.have_fun();											//	calling functions
	cout <<	ms.get_sign() << endl;
	return 0;
}