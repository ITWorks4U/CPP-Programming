/*
	Macros allows you to use short instructions with an expected clean workflow,
	however, you it's much easier to do it wrong.

	Even macros are in use in C programming only, you can also do this in C++,
	but it may result a different behavior rather than in C.
*/
#include <iostream>
using namespace std;

/*
	taken from https://gcc.gnu.org/onlinedocs/cpp/Misnesting.html

	It's also possible to combine multiple macros. The expectation is
	that TWICE needs an argument, like CALL_WITH_ONE, but CALL_WITH_ONE
	needs this argument instead, whereas TWICE runs here without an argument.

	Very hard to understand and much hardly in use.
	Best way to handle that issue: Don't do that.
*/
#define	TWICE(x) 2*(x)
#define	CALL_WITH_ONE(x) (x(1))

/*
	We're expecting, that CALL_WITH_ONE is just an another way like ONE, but it isn't.
	Even in CALL_WITH_ONE might define a constant expression, it doesn't and it's also
	still a macro function.
*/
#define	ONE	1

int main() {

	//	Usually, the macro TWICE shall be called to handle any numerical value, like CALL_WITH_ONE.
	//	but in that case it won't
	cout << "result: " << CALL_WITH_ONE(TWICE) << endl;
	/*
		CALL_WITH_ONE(TWICE):
		CALL_WITH_ONE(2*(1))
	*/

	/*
		When you try to run it in the another way, then CALL_WITH_ONE is undefined, which causes more
		confiusion, because it SHALL be defined as expected.
	*/
	// cout << "result: " << TWICE(CALL_WITH_ONE) << endl;

	//	that runs fine as expected
	cout << "result: " << TWICE(ONE) << endl;

	return EXIT_SUCCESS;
}