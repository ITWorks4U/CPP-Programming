/*
	Macros allows you to use short instructions with an expected clean workflow,
	however, you it's much easier to do it wrong.

	Even macros are in use in C programming only, you can also do this in C++,
	but it may result a different behavior rather than in C.
*/
#include <iostream>
using namespace std;

/*
	Finally, in C it's also possible to assign a function into a variable, depending on the
	C version, OS, C compiler, ...

	C++ won't accept this by default.

	FUNCTION_CALL is "just" a short form for "print the defined WORD to the console by using puts()".
	In that case after the puts() function no semicolon is given, thus after FUNCTION_CALL the semicolon
	is required, otherwise the application won't be built.
*/
#define	WORD	"Hello there!"
#define	FUNCTION_CALL	puts(WORD)

int main(void) {
	FUNCTION_CALL;

	/*	you can also do this:	*/
	char hello_word[] = WORD;
	printf("hello_word = %s\n", hello_word);

	/*	In C++ this won't work:	*/
	// char function_word[] = FUNCTION_CALL;

	/*
		On Linux mint 21.1 Cinnamon 64 bit this error was displayed:

		39_macro_pitfalls_5.cpp: In function ‘int main()’:
		39_macro_pitfalls_5.cpp:22:29: error: initializer fails to determine size of ‘function_word’
		   22 | #define FUNCTION_CALL   puts(WORD)
		      |                         ~~~~^~~~~~
		39_macro_pitfalls_5.cpp:32:32: note: in expansion of macro ‘FUNCTION_CALL’
		   32 |         char function_word[] = FUNCTION_CALL;
		      |                                ^~~~~~~~~~~~~
		39_macro_pitfalls_5.cpp:22:29: error: array must be initialized with a brace-enclosed initializer
		   22 | #define FUNCTION_CALL   puts(WORD)
		      |                         ~~~~^~~~~~
		39_macro_pitfalls_5.cpp:32:32: note: in expansion of macro ‘FUNCTION_CALL’
		   32 |         char function_word[] = FUNCTION_CALL;
		      |                                ^~~~~~~~~~~~~
		39_macro_pitfalls_5.cpp:32:14: warning: unused variable ‘function_word’ [-Wunused-variable]
		   32 |         char function_word[] = FUNCTION_CALL;
		      |              ^~~~~~~~~~~~~

		In other words: an assignment of a function to a variable is not allowed.
	*/

	return EXIT_SUCCESS;
}