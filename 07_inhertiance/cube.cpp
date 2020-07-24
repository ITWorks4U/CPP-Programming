#include "inheritClass.hpp"
#include <iostream>
using namespace std;

/*	---	cube ---	*/
CCube::CCube(double width, double height, double depth) {
	this->width = width;
	this->height = height;
	this->depth = depth;
}

CCube::~CCube() {
	this->width = 0;
	this->height = 0;
	this->depth = 0;
}

void CCube::identifyClass() {
	cout << " I'm a cube!" << endl;
}

double CCube::calculateCircumference() {
	return 2* (this->width + this->height);										//	...for a simple rectangle
}

double CCube::calculateArea() {
	if (this->onEqualDimensions()) {
		return (6 * this->width * this->width);
	}

	return (2 * ((this->width * this->height) + (this->width * this->depth) + (this->height * this->depth)));
}

double CCube::calculateVolume() {
	if (this->onEqualDimensions()) {
		return (this->width * this->width * this->width);
	}

	return (this->width * this->height * this->depth);
}

bool CCube::onEqualDimensions() {
	return (this->width == this->height && this->height == this->depth);
}
