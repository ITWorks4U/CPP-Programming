#ifndef FRIEND_KEYWORD_HPP
#define FRIEND_KEYWORD_HPP

class CVector3 {
	double posX;			//	X coordinate
	double posY;			//	Y coordiante
	double posZ;			//	Z coordinate

	public:
		CVector3();
		CVector3(double posX, double posY);
		CVector3(double posX, double posY, double posZ);
		virtual ~CVector3();

		double getPosX() const;
		double getPosY() const;
		double getPosZ() const;

		CVector3* add(const CVector3 *v1, const CVector3 *v2, const bool valid) const;

	private:
		friend class CPoint;
		bool onEqualPosition(CVector3 *v1, CVector3 *v2) const;

};

class CPoint : public CVector3 {
	public:
		CPoint();
		~CPoint();

		void modifyPrivateMembers();
	private:
		double value;
};

#endif
