/*
	You can also outsource your class methods
	into a certain source file, however, your
	application might not be build, because
	the C++ compiler might not know where to find
	the correct methods.

	Luckily, there're some ways to realize this,
	however, this might also not work for you.

	"solution 1":	define the class instances as a global object in the source file => 35_template_example.cpp
	"solution 2":	include the certain source file in your header
	"solution 3:"	include the certain source file in your main source file => used here => 35_template_main.cpp
*/

#pragma once

/*	"solution 2"	*/
// #include "35_template_example.cpp"

template <class T>
class Calculator {
	public:
		Calculator() {}
		virtual ~Calculator() {}

		/*
			Since the methods are defined as function prototypes,
			we're forced to implement these in a certain source file.
		*/
		T add(T a, T b) const;
		T sub(T a, T b) const;
		T mul(T a, T b) const;
		T div(T a, T b) const;
};