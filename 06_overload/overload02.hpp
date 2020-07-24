/*	overloading operators	*/
#ifndef OVERLOAD_HPP
#define OVERLOAD_HPP

/*
 *	Since C++ you're also able to overload operators for your own purpose, which means, you may define an operator,
 *	to use a short implementation.
*/
class CPoint {
	double x;
	double y;

	public:
		CPoint(double x, double y);
		~CPoint();

		double getX();
		double getY();
		void setX(double x);
		void setY(double y);

		CPoint operator+(const CPoint& point);			//	overwriting + for our purpose
};

#endif
