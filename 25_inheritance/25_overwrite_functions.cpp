#include <iostream>
using namespace std;

class BaseClass {
	protected:
		int member = 10;

	public:
		BaseClass() { cout << "base constructor" << endl; }
		virtual ~BaseClass() { cout << "base destructor" << endl; }

		virtual int getMember() {																		//	with a virtual in front of the method
			return this->member;																		//	it's defined to be able to overwrite 
		}																								//	in each child class
};

class ChildClass : public BaseClass {
	public:
		ChildClass(int member) {
			cout << "child constructor" << endl;
			this->member = member;
		}

		~ChildClass() {
			cout << "child destructor" << endl;
		}

		int getMember() {
			return this->member + 14;
		}
};

int main() {

	BaseClass *bc = new ChildClass(10);
	cout << bc->getMember() << endl;
	delete bc;

	BaseClass *bc2 = new BaseClass();
	cout << bc2->getMember() << endl;
	delete bc2;

	return 0;
}