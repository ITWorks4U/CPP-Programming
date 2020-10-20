#include "PointClass.hpp"

Point2D::Point2D(double x, double y) {
	this->x = x;
	this->y = y;
}

Point2D::~Point2D() {
	this->x = 0.0;
	this->y = 0.0;
}

double Point2D::getX() const {
	return this->x;
}

double Point2D::getY() const {
	return this->y;
}

bool Point2D::onEqualLocation(Point2D &other) const {
	return ((this->x == other.getX()) && (this->y == other.getY()));
}
