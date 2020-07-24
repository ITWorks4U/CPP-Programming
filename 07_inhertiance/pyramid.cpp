#include "inheritClass.hpp"
#include <iostream>
using namespace std;

/*	---	pyramid	---	*/
CPyramid::CPyramid(double width, double height, double depth) {
	this->width = width;
	this->height = height;
	this->depth = depth;
}

CPyramid::~CPyramid() {
	this->width = 0;
	this->height = 0;
	this->depth = 0;
}

void CPyramid::identifyClass() {
	cout << " I'm a pyramid!" << endl;
}

double CPyramid::calculateCircumference() {
	return (this->width + this->height + this->depth);							//	...for a simple triangle
}

double CPyramid::calculateArea() {
	return (this->width * (this->width + (2 * this->height)));
}

double CPyramid::calculateVolume() {
	return ((1.0/3.0) * (this->width * this->width * this->height));
}
