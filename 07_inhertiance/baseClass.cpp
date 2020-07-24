#include "baseClass.hpp"

CGeometricObject::~CGeometricObject() {
}

double CGeometricObject::getWidth() {
	return this->width;
}

double CGeometricObject::getHeight() {
	return this->height;
}

double CGeometricObject::getDepth() {
	return this->depth;
}
