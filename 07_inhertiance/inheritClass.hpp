/*	interited classes for our purpose	*/
#ifndef INHERIT_CLASS_HPP
#define INHERIT_CLASS_HPP

#include "baseClass.hpp"					//	←	in use for base class

/*
 *	↓	a class followed by a `: (public) base_class` allows you to extend the base class
 *	↓	with new properties	for this class.
*/
class CCube : public CGeometricObject {
	public:
		CCube(double width, double height, double depth);
		~CCube();

		void identifyClass();

		double calculateCircumference();
		double calculateArea();
		double calculateVolume();
	private:
		bool onEqualDimensions();
};

class CPyramid : public CGeometricObject {
	public:
		CPyramid(double width, double height, double depth);
		~CPyramid();

		void identifyClass();

		double calculateCircumference();
		double calculateArea();
		double calculateVolume();
};


class CSphere : public CGeometricObject {
	public:
		CSphere(double size);
		~CSphere();		

		void identifyClass();

		double calculateCircumference();
		double calculateArea();
		double calculateVolume();
};

#endif
