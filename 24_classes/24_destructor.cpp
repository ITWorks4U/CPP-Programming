#include <iostream>
using namespace std;

/*
	A destructor releases requested
	amount of space etc, if any.

	A destructor can be similary used like
	a constructor, however, a destructor
	can't be overloaded.

	You can also call a destructor
	directly, however, it may cause
	an undefined behavior.
*/

class MyClass {
	int a = 10;
	float f = 1.23F;

	public:
		MyClass() {}

		MyClass(int a, int f) {
			this->a = a;
			this->f = f;
		}

		MyClass(MyClass &copy) {
			this->a = copy.a;
			this->f = copy.f;
		}

		~MyClass() {}																				//	a destructor starts
																									//	with a tilde symbol
																									//	followed by the identical
																									//	name of your class

		void printMembers() {
			cout << a << ", " << f << endl;
		}
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