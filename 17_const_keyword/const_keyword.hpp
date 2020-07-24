#ifndef CONST_KEYWORD_HPP
#define CONST_KEYWORD_HPP

class CVector3 {
	double posX;			//	X coordinate
	double posY;			//	Y coordiante
	double posZ;			//	Z coordinate

	public:
		CVector3();
		CVector3(double posX, double posY);
		CVector3(double posX, double posY, double posZ);
		~CVector3();

		double getPosX() const;
		double getPosY() const;
		double getPosZ() const;

		CVector3* add(const CVector3 *v1, const CVector3 *v2, const bool valid) const;
};

#endif
