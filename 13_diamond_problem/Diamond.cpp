/*	implementation of the diamond problem	*/
#include <iostream>
#include "Diamond.hpp"

/*	super class		*/
CBase::~CBase() {}

/*	first class		*/
std::string CDerived01::identifyClass() {
	return "content from derived class \"CDerived01\"";
}

/*	second class	*/
std::string CDerived02::identifyClass() {
	return "content from derived class \"CDerived02\"";
}

/*	diamond class	*/
std::string CDiamond::identifyClass() {
	return "My own implementation!!!";
}
