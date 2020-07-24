#ifndef VECTOR_COORDINATE_HPP
#define VECTOR_COORDINATE_HPP

namespace Math {
	class CVector {
		double x;
		double y;
		double z;
		double angle;

		public:
			CVector();
			CVector(double x, double y, double angle);
			CVector(double x, double y, double z, double angle);
			CVector(const CVector &vec);

			CVector operator+(const CVector &vec);
			CVector operator-(const CVector &vec);

			const double calculateDotProduct(const CVector &vec1, const CVector &vec2);
			const CVector calculateCrossProduct(const CVector &vec1, const CVector &vec2);	
	};
}

#endif
