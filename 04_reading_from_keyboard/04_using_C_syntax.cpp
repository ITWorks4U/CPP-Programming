/*
	it's also possible to use the C-syntax,
	however, that's not recommended for C++
*/

#include <iostream>

//	headers from C
#include <cstdio>													//	printf(), fgets()
#include <cstring>													//	memset()

using namespace std;

int main() {
	char content[20];

	//	the syntax is identical to the string variant
	// cout << "enter anything: ";
	// cin >> content;
	// cout << "content contains: " << content << endl;

	//	WITHOUT cleaning the buffer, the '\n' (newline from enter key)
	//	remains in the buffer 

	//	alternative: using C-syntax
	memset(content, '\0', 20);										//	required to "reset" the C-string
																	//	otherwise it contains random
																	//	characters on runtime
	printf("enter anything: ");
	fgets(content, 20, stdin);										//	reading up to 20 characters to content
	content[19] = '\0';												//	last character will be replaced
																	//	with a null termination character

	printf("content contains: %s\n", content);
	
	/*
		disadvantages:
			-	content can hold up to 19 real characters
			-	depending on reading functions (gets(), fgets(), scanf(), ...)
				content may hold a different result 
			-	adding more than the given upper boundary
				modifies other addresses and may crash
				your application, e. g.: fgets(content, 30, stdin),
				whereas content may hold up to 20 characters only!
			-	using C++ variant followed by C variant causes
				that content won't contain a readable word after fgets(),
				because after cin the enter key command (\n) remains
				in the buffer
	*/

	return 0;
}