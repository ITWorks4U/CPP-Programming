/*	classes in C++	*/
#ifndef CLASSES_HPP
#define CLASSES_HPP

/*
 *	Like a struct or an union (both comes from C) a class starts with the name class and
 *	has the same body as a struct, union or enum.
 *
 *	the difference between a struct and a class: inside of a class every member is set to a private access by default,
 *	where an access from outside doesn't work, unless you're using public areas or the keyword friend (← use with care)
 *
 *	nice to know: the most C/C++ programmers are using a capital character in front of the name
 *	which is the same character as the character of the data structure, where:
 *		- union:	UName
 *		- struct: 	SName
 *		- enum:		EName
 *		- class:	CName (where an interface is IName)
*/
class CBox {
	double width;							//	these three members are private by default
	double height;							//	so there is no need to define the keyword
	double breadth;							//	private at the beginning of the class

	public:									//	since "public" every member is public; everything is accessable and modifyable from outside of this class
		CBox();								//	constructor of the class
		~CBox();							//	the destructor of the class → for more details: look for the next part
	
		void setWidth(double width);		//	setter methods
		void setHeight(double height);
		void setBreadth(double breadth);

		double getWidth();					//	getter methods
		double getHeight();
		double getBreadth();

		double calculateBoxVolume();

	private:
		/*	you may define a new private area, too	*/

	protected:
		/*	inside of this area everything is protected → for more details: inheritance, polymorphism, ... (comes soon)		*/
};

#endif
