#include "classes.hpp"

/*
 *	Typically, constructors, destructors and methods are implemented in the class.
 *	Sometimes, it's better to define a data structure with it's members only,
 *	where the implementation is in a separated file.
 *
 *	definition for a method implementation outside the class:
 *	<modifier> <type> className::classMethod(params) {}
*/

/*	constructor	*/
CBox::CBox() {}

/*	destructor	*/
CBox::~CBox() {}

/*	setter methods	*/
void CBox::setWidth(double width) {
	this->width = width;											// by using the this-> operator you determine to change the member variable with the given parameter
}

void CBox::setHeight(double height) {
	this->height = height;											//	now it's possible to use two variables with the same name, which are still different
}

void CBox::setBreadth(double breadth) {
	this->breadth = breadth;										//	in C this operation was not possible
}

/*	getter methods	*/
double CBox::getWidth() {
	return this->width;
}

double CBox::getHeight() {
	return this->height;
}

double CBox::getBreadth() {
	return this->breadth;
}

double CBox::calculateBoxVolume() {
	return (this->width * this->height * this->breadth);
}
