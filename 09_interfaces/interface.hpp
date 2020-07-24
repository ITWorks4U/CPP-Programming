/*	a simple interface example	*/
#ifndef INTERFACE_HPP
#define INTERFACE_HPP

#define	INVALID_SIZE -1.0F

/*
 *	In C++ since a method is defined as a pure virtual method, then this class becomes
 * 	to an abstract class, sometimes called: interface.
 *
 *	Some C++ programmers declare a class as an interface, if every method of this class
 *	is a pure virtual method only, otherwise it's "just" an abstract class.
 *
 *	You can't create an instance of this class from outside.
 *	Every derived class have to	implement every abstact method for their own purpose.
 *
 *	note: an interface in C++ is a class, where the capital character starts with an `I`.
*/
class IGeometricObject {
	protected:
		double width;
		double height;

	public:
		virtual ~IGeometricObject();								//	virtual destructor: tells every derived class not to overwrite this method

		virtual const double calculateArea() = 0;					//	← abstract method, where now this class becomes to an abstract class (in C++: interface)	
		virtual const double calculateVolume() = 0;				//	pure virtual function: tells every derived class to overwrite the given method for it's own implementation
};

/*		---	some derived classes ---		*/

/*	it's the same operation like to an inheritance  */
class CRectangle : public IGeometricObject {						//	2D object
	public:
		CRectangle(double width, double height);
		const double calculateArea();
		const double calculateVolume();							//	← this method is useless for every 2D object, but it's still required
};

class CSphere : public IGeometricObject {							//	3D object
	public:
		CSphere(double diameter);
		const double calculateArea();								//	← same for each 3D object
		const double calculateVolume();
};

#endif
