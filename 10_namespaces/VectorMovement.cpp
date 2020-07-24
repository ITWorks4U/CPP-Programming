#include <cmath>
#include "VectorMovement.hpp"

/*
 *	There are two possible valid varaints to use namespaces:
 *		("chill mode")			1:	namespace NAME { content }
 *		("frustration mode")	2:	namespace_name::<modifier> <type> class_name::method(params)
*/
namespace Physic {
	CVector::CVector() {
		this->velocity = 0.0F;
		this->acceleration = 0.0F;
		this->position = 0.0F;
		this->time = 0.0F;
		this->radius = 0.0F;
	}

	CVector::CVector(double velocity, double time, EMoveOption option) {
		this->velocity = velocity;
		this->time = time;
		this->option = option;
	}

	CVector::CVector(double velocity, double time, double acceleration, EMoveOption option) {
		this->velocity = velocity;
		this->time = time;
		this->acceleration = acceleration;
		this->option = option;
	}

	void CVector::setMoveOption(EMoveOption option) {
		this->option = option;
	}

	void CVector::setVelocity(double v) {
		this->velocity = v;
	}

	void CVector::setAccelertion(double a) {
		this->acceleration = a;
	}

	void CVector::setPosition(double s) {
		this->position = s;
	}

	void CVector::setTime(double t) {
		this->time = t;
	}

	void CVector::setRadius(double radius) {
		this->radius = radius;
	}

	const double CVector::getRadius() {
		return this->radius;
	}

	const double CVector::getVelocity() {
		return 	this->velocity;
	}

	const double CVector::getAcceleration() {
		return 	this->acceleration;
	}

	const double CVector::getPosition() {
		return 	this->position;
	}

	const double CVector::getTime() {
		return 	this->time;
	}

	double CVector::calculateVelocity() {
		switch (this->option) {
			case CONSTANT_LINEAR:
				this->velocity = (this->position / this->time);

				break;
			case CONSTANT_CIRCULAR:
				this->velocity = ((2 * M_PI * this->radius) / (this->time));
			
				break;
			case DYNAMIC:
				this->velocity = (this->acceleration * this->time);

				break;
		}

		return this->velocity;
	}

	double CVector::calculatePosition() {
		switch (this->option) {
			case CONSTANT_LINEAR:
				this->position = (this->velocity * this->time);

				break;
			case DYNAMIC:
				this->position = (((this->acceleration / 2) * (this->time * this->time)) + (this->velocity * this->time));

				break;
		}

		return this->position;
	}

	double CVector::calculateTime() {
		switch (this->option) {
			case CONSTANT_LINEAR:
				this->time = (this->position / this->velocity);

				break;
			case CONSTANT_CIRCULAR:
				this->time = ((2 * M_PI * this->radius) / this->velocity);

				break;
			case DYNAMIC:
				this->time = (this->velocity / this->acceleration);

				break;
		}

		return this->time;
	}

	double CVector::calculateAcceleration() {
		this->acceleration = ((2 * this->position) / (this->time * this->time) - (this->velocity * this->time));
	}
}
