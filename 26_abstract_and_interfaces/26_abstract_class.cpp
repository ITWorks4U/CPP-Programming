#include <iostream>
#include <cmath>
using namespace std;

/*
	Abstract classes, also known as interfaces (C++ only),
	allows you to define a common class, where the child
	class(es) only are implementing the functionality
	of code.

	Every child class, which inherits from the abstract class/
	interface, must implement all methods. It's like
	a contract.

	Since an abstract class / interface class has been defined,
	it can't be instanziated.

	An interface is often defined as I<ClassName>, where "I"
	represents an interface.
*/

class GeometricObject {
	public:
		virtual double calcArea() = 0;
		virtual double calcCircumference() = 0;
		virtual ~GeometricObject() {}
};

class Circle : public GeometricObject {
	double radius = 0.0;

	public:
		Circle(double radius) {
			this->radius = radius;
		}

		double calcArea() {
			return M_PI * this->radius * this->radius;
		}

		double calcCircumference() {
			return 2 * M_PI * this->radius;
		}
};

int main() {
	// GeometricObject go;																				//	unable to create an object of
																										//	the base class

	Circle c(10);
	cout << "{" << c.calcArea() << ", " << c.calcCircumference() << "}" << endl;

	GeometricObject *go = new Circle(15);																//	However, a polymorphism is still
	cout << "{" << go->calcArea() << ", " << go->calcCircumference() << "}" << endl;					//	possible here.
	delete go;

	return 0;
}