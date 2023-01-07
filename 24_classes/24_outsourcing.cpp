#include <iostream>
using namespace std;

/*
	Mostly, every constructor, destructor
	and method is not defined inside of the
	class to reduce code and shows a clean
	way for work.

	The methods etc. are often outsourced
	in an own file, whereas the class itself
	has been defined in a header file.
*/

class MyClass {
	int a = 10;
	float f = 1.23F;

	public:
		MyClass();
		MyClass(int a, int f);
		MyClass(MyClass &copy);
		~MyClass();

		void printMembers();
};

/*	outsourcing	*/
MyClass::MyClass() {}																			//	Accessing to an outsurced member

MyClass::MyClass(int a, int f) {
	this->a = a;
	this->f = f;
}

MyClass::MyClass(MyClass &copy) {
	this->a = copy.a;
	this->f = copy.f;
}

MyClass::~MyClass() {}

void MyClass::printMembers() {
	cout << a << ", " << f << endl;
}

/*	normal workflow	*/
int main() {
	MyClass mc;
	MyClass mcExtended(1, 2.3F);
	MyClass mcCopy(mc);

	mc.printMembers();
	mcExtended.printMembers();
	mcCopy.printMembers();
	
	return 0;
};