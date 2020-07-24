#include "interface.hpp"
#include <cmath>

/*	interface	*/
IGeometricObject::~IGeometricObject() {
	this->width = INVALID_SIZE;
	this->height = INVALID_SIZE;
}

const double IGeometricObject::calculateArea() {						//	don't use the keyowrd `virtual` → C++ error confirmed: ‘virtual’ outside class declaration
	return INVALID_SIZE;
}

const double IGeometricObject::calculateVolume() {
	return INVALID_SIZE;
}

/*	rectangle implementations	*/
CRectangle::CRectangle(double width, double height) {
	this->width = width;
	this->height = height;
}

const double CRectangle::calculateArea() {
	return (this->width * this->height);
}

const double CRectangle::calculateVolume() {
	return INVALID_SIZE;
}

/*	sphere implementations		*/
CSphere::CSphere(double diameter) {
	this->width = diameter;
}

const double CSphere::calculateArea() {
	return INVALID_SIZE;
}

const double CSphere::calculateVolume() {
	return ((M_PI/6.0) * (pow(this->width, 3)));
}
