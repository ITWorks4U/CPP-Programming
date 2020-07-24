/*	a simple polymorphism example	*/
#ifndef POLYMORPHISM_HPP
#define POLYMORPHISM_HPP

/*
 *	Polymorphism is to define similar operations, which still have different results.
 *	In this class below we define a base class and it offers a method "calculateArea()".
 *
 *	Basicly we don't know how to calculate the area, because every 2D geometric object
 *	has it's own implementation.
*/
class CGeometricObject {
	protected:
		double width;
		double height;

	public:
		virtual double calculateArea();
};

class CRectangle : public CGeometricObject {
	public:
		CRectangle(double width, double height);
		~CRectangle();

		double calculateArea();							//	A = a*b
};

class CCircle : public CGeometricObject {
	public:
		CCircle(double width);
		~CCircle();

		double calculateArea();							//	A = M_PI/4 * d²
};

#endif
