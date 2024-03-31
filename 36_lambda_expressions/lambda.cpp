/*
	Lambda expressions are similar to functions, which aren't functions.
	It allows you to handle an expression like a function without defining a function.
	In summary, lambda expressions are anonymous functions.

	Often used in math.
*/

#include <iostream>
using namespace std;

void aNormalFunction() {
	/*	...	*/
}

int main() {
	aNormalFunction();

	/*
		syntax for a lambda expression:
		<type> <name> = [<capture clause>](<parameter list>) <mutable> <throw> -> <type> {<code>}

		attention: not every optional expression can be used everywhere or results to the same behavior

		---REQUIRED---
		<type> 				often used with "auto", because lambda expressions might not have a known data type

		<name> 				the lambda expression to work with

		<code>				the body of the lambda expression

		---OPTIONAL---
		<capture clause>	using a (global) variable to work with this lambda expression
			=> &<variable> = captured by reference
			=> =<variable> = captured by value (default)

		<parameter list>	variables / objects, which are in use only in the lambda body
			=> in C++14 "auto" can be used, too

		<mutable>			Typically, a lambda's function call operator is const-by-value,
							but use of the mutable keyword cancels this out. It doesn't produce mutable data members.
							The mutable specification enables the body of a lambda expression to modify variables
							that are captured by value.

		<throw>				if required, the lambda expression might throw an exeption and you
							also can suppress an exception throw

		-> <type>			trailing return type
							if set, then "auto" keyword is hardly in use, because you now know which type is required

		
	*/

	/*	an empty lambda, which does and returns nothing; can't handle with variables	*/
	auto lambda_01 = [](){};

	int argument = 5;
	auto lambda_02 = [argument](){
		return argument * argument;
	};

	auto lambda_03 = [](float a, float b) -> float {
		return a * b;
	};

	/*	"promise", that this lambda expression won't throw an exception => might not work	*/
	auto lambda_04 = []() noexcept {
		int res;

		try {
			res = 10 / 0;
		} catch (exception &e) {
			res = 0;
		}

		return res;
	};

	/*	"promise", that this lambda expression will throw an exception => must be handled inside of the lambda expression	*/
	auto lambda_05 = []() throw() {
		try {
			logic_error e("logic_error exception has been thrown");
			throw e;
		} catch (logic_error &e) {
			cerr << e.what() << endl;
		}
	};

	// cout << lambda_01 << endl;
	// cout << lambda_01() << endl;
	lambda_01();
	cout << lambda_02() << endl;
	cout << lambda_03(0.01F, 3.0F) << endl;

	//	-----------------
	//	didn't worked here
	//	-----------------
	// try {
	// 	lambda_04();
	// } catch (exception &e) {
	// 	cerr << e.what() << endl;
	// }
	// cout << lambda_04() << endl;
	//	-----------------
	// try {
	// 	lambda_05();
	// } catch (exception &e) {
	// 	cerr << e.what() << endl;
	// }
	//	-----------------

	lambda_05();

	return 0;
}