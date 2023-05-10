#include <iostream>
#include <cstdlib>																							//	required for malloc(), free()
using namespace std;

/*
	Casting a variable / object to another variable / object
	helps you to work quick and (mostly) without issues,
	however, this also causes logical errors followed by
	undefined behaviors.
*/

struct Example {
	int i_member;
	char word1[20];																							//	C-string with 20 bytes
	char *word2;																							//	C-string with 8 bytes!
};

int main() {
	/*
		Simple example: allocating memory for a structure => the typical C-style is in use here.
		In C programming a cast is optional, but in C++ it's strictly required!

		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~
		In C++ this (or similar) build error appears:
		'A value of type "void *" cannot be used to initialize an entity of type "Example *"'
		~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~

		void *malloc(size_t __size) returns a pointer to an allocated structure with n bytes
		depending on the size of the structure => in that case 32 bytes

		attention: A pointer has ALWAYS a size of 8 bytes!

		If you want more to learn about pointers, then take a look there:
		https://github.com/ITWorks4U/C-Programming/tree/main/29_pointers
	*/

	Example *ex = /*(Example *)*/ malloc(sizeof(Example));
	
	/*	***		some operations here	***		*/

	//	since malloc() was in use to allocate memory, we must release the memory by our own
	free(ex);

	return 0;
}