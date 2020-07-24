#include "inheritClass.hpp"
#include <cmath>																	//	←	for mathematical operations
#include <iostream>
using namespace std;

/*	---	sphere	---	*/
CSphere::CSphere(double size) {
	this->width = size;
	this->height = size;
	this->depth = size;
}

CSphere::~CSphere() {
	this->width = 0;
	this->height = 0;
	this->depth = 0;
}

void CSphere::identifyClass() {
	cout << " I'm a shere!" << endl;
}

double CSphere::calculateCircumference() {
	return (M_PI * this->width);
}

double CSphere::calculateArea() {
	return ((1.0/4.0) * M_PI * (this->width * this->width));
}

double CSphere::calculateVolume() {
	return ((1.0/6.0) * M_PI * (this->width * this->width * this->width));
}
