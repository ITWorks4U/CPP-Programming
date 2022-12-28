/*
	determining how much bytes a datatype requires;
	contains the primitive datatypes only
*/

#include <iostream>
#include <string>																				//	required for string data type
using namespace std;

int main() {
	//	sizeof(<data type>) is a keyword from C

	cout << "char has a size of " << sizeof(char) << " bytes" << endl;							//	alternative: int8_t
	cout << "short has a size of " << sizeof(short) << " bytes" << endl;						//	alternative: int16_t
	cout << "short int has a size of " << sizeof(short int) << " bytes" << endl;				//	identical to short
	cout << "int has a size of " << sizeof(int) << " bytes" << endl;							//	alternative: int32_t
	cout << "long has a size of " << sizeof(long) << " bytes" << endl;							//	alternative: int64_t
	cout << "long int has a size of " << sizeof(long int) << " bytes" << endl;					//	identical to long
	cout << "long long has a size of " << sizeof(long long) << " bytes" << endl;
	cout << "long long int has a size of " << sizeof(long long int) << " bytes" << endl;		//	identical to long long int
	cout << "bool has a size of " << sizeof(bool) << " bytes" << endl;
	cout << "string has a size of " << sizeof(string) << " bytes" << endl;

	cout << "unsigned char has a size of " << sizeof(unsigned char) << " bytes" << endl;		//	alternatives: u_char, u_int8_t
	cout << "unsigned short has a size of " << sizeof(unsigned short) << " bytes" << endl;		//	alternatives: u_short, u_int16_t
	cout << "unsigned short int has a size of " << sizeof(unsigned short int) << " bytes" << endl;
	cout << "unsigned int has a size of " << sizeof(unsigned int) << " bytes" << endl;
	cout << "unsigned long has a size of " << sizeof(unsigned long) << " bytes" << endl;
	cout << "unsigned long int has a size of " << sizeof(unsigned long int) << " bytes" << endl;
	cout << "unsigned long long has a size of " << sizeof(unsigned long long) << " bytes" << endl;
	cout << "unsigned long long int has a size of " << sizeof(unsigned long long int) << " bytes" << endl;
	
	//	bool and string doesn't comes with an 'unsigned' 
	// cout << "bool has a size of " << sizeof(bool) << " bytes" << endl;
	// cout << "string has a size of " << sizeof(string) << " bytes" << endl;

	return 0;
}