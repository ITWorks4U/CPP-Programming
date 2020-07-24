#include <new>
#include <cstdlib>
#include "const_keyword.hpp"

/*	---	class implementation	---	*/
CVector3::CVector3() {
	this->posX = 0.0;
	this->posY = 0.0;
	this->posZ = 0.0;
}

CVector3::CVector3(double posX, double posY) {
	this->posX = posX;
	this->posY = posY;
	this->posZ = 0.0;
}

CVector3::CVector3(double posX, double posY, double posZ) {
	this->posX = posX;
	this->posY = posY;
	this->posZ = posZ;
}

CVector3::~CVector3() {
	this->posX = 0.0;
	this->posY = 0.0;
	this->posZ = 0.0;
}

double CVector3::getPosX() const {
	return this->posX;
}

double CVector3::getPosY() const {
	return this->posY;
}

double CVector3::getPosZ() const {
	return this->posZ;
}

CVector3* CVector3::add(const CVector3 *v1, const CVector3 *v2, const bool valid) const {
	if (valid) {
		CVector3 *tmp = new CVector3(v1->getPosX() + v2->getPosX(), v1->getPosY() + v2->getPosY(), v1->getPosZ() + v2->getPosZ());
		return tmp;
	}

	return NULL;	//	since C++11: nullptr is also valid
}
