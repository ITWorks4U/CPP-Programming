/*
	Header files are similar to interfaces.
	These offers data types, definitions, functions, etc.

	Typically, in C++ a header file ends with ".h",
	but sometimes a ".hpp" is also given
*/

/*	mostly used on Windows	*/
// #pragma once

/*	basic usage	*/
#ifndef	HEADER_H
#define HEADER_H

	/*	some function prototypes	*/

	int add(int a, int b);
	int subtract(int a, int b);
	int multiply(int a, int b);
	int divide(int a, int b);
	int modulo(int a, int b);
	//	... 

#endif