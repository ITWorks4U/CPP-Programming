/*
 *	The diamond-problem in C++ is in use, if a class derives from a set of classes,
 *	where each super class has a method and/or a variable or else, which already exists
 *	in another class of the same hierarchy level, thus you don't know which method/variable
 *	is now in use.
*/
#ifndef DIAMOND_HPP
#define DIAMOND_HPP
#include <string>

//	super class
class CBase {
	public:
		virtual std::string identifyClass() = 0;
		virtual ~CBase();
};

//	first derived class
class CDerived01 : virtual public CBase {
	public:
		std::string identifyClass();
};

//	second derived class
class CDerived02 : virtual public CBase {
	public:
		std::string identifyClass();
};

/*	this class is derived from two classes	*/
class CDiamond : public CDerived01, CDerived02 {
	public:
		std::string identifyClass();
};

#endif
