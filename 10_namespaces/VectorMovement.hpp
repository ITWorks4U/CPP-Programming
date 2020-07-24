/*	namespace example	*/
#ifndef VECTOR_MOVEMENT_HPP
#define VECTOR_MOVEMENT_HPP

namespace Physic {
	enum EMoveOption {
		CONSTANT_LINEAR, CONSTANT_CIRCULAR, DYNAMIC
	};

	class CVector {
		double velocity;
		double acceleration;
		double position;
		double time;
		double radius;
	
		EMoveOption option;

		public:
			CVector();
			CVector(double velocity, double time, EMoveOption option);
			CVector(double velocity, double time, double acceleration, EMoveOption option);

			void setMoveOption(EMoveOption option);
			void setVelocity(double v);
			void setAccelertion(double a);
			void setPosition(double s);
			void setTime(double t);
			void setRadius(double radius);

			const double getVelocity();
			const double getAcceleration();
			const double getPosition();
			const double getTime();
			const double getRadius();

			double calculateVelocity();
			double calculatePosition();
			double calculateTime();
			double calculateAcceleration();
	};
}

#endif
