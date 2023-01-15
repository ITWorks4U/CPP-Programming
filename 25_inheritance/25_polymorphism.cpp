#include <iostream>
using namespace std;

class BaseClass {
	protected:
		int member;

	public:
		BaseClass() { cout << "base constructor" << endl; }											//	to see that output
		virtual ~BaseClass() { cout << "base destructor" << endl; }									//	virtual is required to make sure
																									//	to delete the child object, too
		int getMember() {																			//	this function must be moved to public,
			return this->member;																	//	otherwise you haven't access to the
		}																							//	child's methods
};

class ChildClass : public BaseClass {																//	with public we define a bidirectional way
	public:
		ChildClass(int member) {
			cout << "child constructor" << endl;
			this->member = member;
		}

		~ChildClass() {
			cout << "child destructor" << endl;
		}

		int getMember() {
			return this->member;
		}
};

int main() {

	BaseClass *bc = new ChildClass(12);																//	polymorphism: define an object of the base class
																									//	and refer it to any child class
	cout << bc->getMember() << endl;																//	to gain access to it's member value by getMember()
	delete bc;																						//	strictly required :o)

	return 0;
}