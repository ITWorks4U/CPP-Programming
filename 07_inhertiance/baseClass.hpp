/*	inheritance example and usage	*/
#ifndef BASE_CLASS_HPP
#define BASE_CLASS_HPP

/*
 *	This class below has the keyword `protected`.
 *	protected:
 *		→	offers access to methods and many more for all inherited class
 *		→	doesn't allow access from outside; it's similar to `private`
*/
class CGeometricObject {
	protected:
		double width;
		double height;
		double depth;

	public:		
		~CGeometricObject();

		double getWidth();
		double getHeight();
		double getDepth();
};

#endif
