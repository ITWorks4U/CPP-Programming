#include <cmath>
#include "VectorCoordinate.hpp"

namespace Math {
	CVector::CVector() {
		this->x = 0.0F;
		this->y = 0.0F;
		this->z = 0.0F;
		this->angle = 0.0F;
	}

	CVector::CVector(double x, double y, double angle) {
		this->x = x;
		this->y = y;
		this->angle = angle;
	}

	CVector::CVector(double x, double y, double z, double angle) {
		this->x = x;
		this->y = y;
		this->z = z;
		this->angle = angle;
	}

	CVector::CVector(const CVector &vec) {
		this->x = vec.x;
		this->y = vec.y;
		this->z = vec.z;
		this->angle = vec.angle;
	}

	CVector CVector::operator+(const CVector &vec) {
		CVector tmp(0.0, 0.0, 0.0, 0.0);
		tmp.x = this->x + vec.x;
		tmp.y = this->y + vec.y;
		tmp.z = this->z + vec.z;

		return tmp;
	}

	CVector CVector::operator-(const CVector &vec) {
		CVector tmp(0.0, 0.0, 0.0, 0.0);
		tmp.x = this->x - vec.x;
		tmp.y = this->y - vec.y;
		tmp.z = this->z - vec.z;

		return tmp;
	}

	const double CVector::calculateDotProduct(const CVector &vec1, const CVector &vec2) {
		return ((vec1.x * vec2.x) + (vec1.y * vec2.y) + (vec1.z * vec2.z));
	}

	const CVector CVector::calculateCrossProduct(const CVector &vec1, const CVector &vec2) {
		CVector tmp(0.0, 0.0, 0.0, 0.0);
		tmp.x = ((vec1.x * vec2.x) + (vec1.x * vec2.y) + (vec1.x * vec2.z));
		tmp.y = ((vec1.y * vec2.x) + (vec1.y * vec2.y) + (vec1.y * vec2.z));
		tmp.z = ((vec1.z * vec2.x) + (vec1.z * vec2.y) + (vec1.z * vec2.z));
	
		return tmp;
	}
}
