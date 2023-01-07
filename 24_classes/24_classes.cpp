#include <iostream>
using namespace std;

/*
	In C++ a class is similar to a struct or union,
	however, this comes with security settings.

	While union and struct members are public by default,
	everything in a class is private. To set / chance
	this access modifications, you can write
	public, private or protected.

	While an object has been initialized by static way,
	this object will automatically be freed from memory,
	when this object is no longer in use.

	A struct or union allows you to initialize up to one
	member, whereas a class has not this limit.
*/

class MyClass {
	/*	private access by default	*/
	int a = 10;
	float f = 1.23F;

	public:
		//	everything below this is public

	private:
		//	everything below this is private
		//	and available in this class only

	protected:
		//	similar to private, however, it's in
		//	use for inherticance
};

int main() {
	MyClass mc;																						//	object instance for MyClass

	//	You can't do this.
	//cout << mc.a << ", " << mc.f << endl;
	
	return 0;
};