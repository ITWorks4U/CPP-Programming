#include "polymorphism.hpp"
#include <cmath>

/*	base class implementations		*/
double CGeometricObject::calculateArea() {
	return 0.0F;
}

/*	rectangle class implementations	*/
CRectangle::CRectangle(double width, double height) {
	this->width = width;
	this->height = height;
}

CRectangle::~CRectangle() {
	this->width = -1;
	this->height = -1;
}

double CRectangle::calculateArea() {
	return (this->width * this->height);
}

/*	circle class implementations	*/
CCircle::CCircle(double width) {
	this->width = width;
}

CCircle::~CCircle() {
	this->width = -1;
}

double CCircle::calculateArea() {
	return ((M_PI / 4) * (this->width * this->width));
}
