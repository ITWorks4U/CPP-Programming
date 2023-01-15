#include <iostream>
using namespace std;

//	in use to offer something for inheritance
class BaseClass {
	protected:																							//	allows you to define
		int member;																						//	a protected area
																										//	everything in this area
		int getMember() {																				//	can be used in a derived
			return this->member;																		//	class, however, from outside
		}																								//	you don't have an access to it
};

//	derived class
class ChildClass : BaseClass {																			//	an inheritance
	public:																								//	basicly, it's not required to set it to
		ChildClass(int member) {																		//	public, however, we want to access to
			this->member = member;																		//	the child's member
		}

		int getMember() {																				//	since it's name is identical to the base
			return this->member;																		//	method, you can also ovewrite this method
		}
};

int main() {

	ChildClass cc(12);
	cout << cc.getMember() << endl;

	// BaseClass bc;																					//	it's able, but you can't do anything here
	// cout << bc.member << ", " << bc.getMember() << endl;

	return 0;
}