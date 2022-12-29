/*
	An own library, which
	can be implemented elsewhere.

	This library is modified for C++ only.
	In C this library won't work.

	This library will be available
	for Linux only. On Windows a
	library is able to create
	by using Visual Studio.

	video: https://www.youtube.com/watch?v=nZBSVb6SJaQ&list=PLwMeVY6dlAg20kre011gbHHzMl77SIi-g&index=21
*/

//	----------
//	simple implementation
//	of a periodic system
//	----------

#pragma once
#include <string>
#include <list>
using namespace std;

//	----------
//	data types
//	----------
enum class Type {
	SOLID, LIQUID, GAS
};

enum class Classification {
	METAL, SEMI_METAL, NON_METAL, NOBLE_METAL, NOBLE_GAS
};

enum class Notification {
	NATURAL, ARTIFICIALLY, RADIOACTIVE, UNKNOWN
};

struct Element {
	int Id;
	string name;
	string symbol;
	double melting_point;
	double boiling_point;
	Type t;
	Classification c;
	list<Notification> notifications;
};

//	----------
//	function (typically C-like)
//	----------
void print_element(Element e);