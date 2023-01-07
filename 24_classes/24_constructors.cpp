#include <iostream>
using namespace std;

/*
	There're different ways to create and
	use a constructor.

	Since your class has no constructor defined,
	an empty default constructor is in use.

	An extended constructor is often used for
	member initialisations.

	A copy constructor allows you to use a
	copy of an already existing instance
	of the class itself.

	A constructor has no type and doesn't
	need a return value.
*/

class MyClass {
	int a = 10;
	float f = 1.23F;

	public:
		/*	default constructor	*/
		MyClass() {}

		/*	extended constructor	*/
		MyClass(int a, int f) {
			this->a = a;																			//	>this< says: THIS member
			this->f = f;																			//	is in use
		}

		/*	copy constructor	*/
		MyClass(MyClass &copy) {																	//	& is required to know
			this->a = copy.a;																		//	where the original object
			this->f = copy.f;																		//	comes from
		}

		/*	any member methods	*/																	//	functions in a class are
		void printMembers() {																		//	often called method, because
			cout << a << ", " << f << endl;															//	these are available in this
		}																							//	class only
};

int main() {
	MyClass mc;
	MyClass mcExtended(1, 2.3F);
	MyClass mcCopy(mc);

	mc.printMembers();
	mcExtended.printMembers();
	mcCopy.printMembers();
	
	return 0;
};