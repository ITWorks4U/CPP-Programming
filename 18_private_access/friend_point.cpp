#include "friend_keyword.hpp"

CPoint::CPoint() {
/*	↓ this instructions below are invalid, because posX, posY and posZ (from CVector3) are private,
	↓ unless the keyword `friend` is in use */

	this->posX = 2.0;
	this->posY = 4.0;
	this->posZ = 8.0;

/**/

	this->value = 4.5;
}

CPoint::~CPoint() {
}

void CPoint::modifyPrivateMembers() {
	this->posX *= this->value;
	this->posY *= this->value;
	this->posZ *= this->value;
}
