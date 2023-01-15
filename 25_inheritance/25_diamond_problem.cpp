#include <iostream>
#include <string>
using namespace std;

/*
	A diamond problem occurs, when a child class
	inhertis from two or more base classes, where
	these classes inhertits fro an another base class.

	By accessing by polymorphism we have a problem.
	With the keyword "virtual" for each inheritance
	we can deal with that.

	Other OOP languages, like Java (more for interfaces),
	C#, etc. handles the diamond problem automatically.
*/

class Base {
	public:
		virtual ~Base() {}
		virtual string identifyClass() = 0;
};

class Child1 : virtual public Base {																	//	virtual keyword is required
	protected:
		virtual ~Child1() {}
		virtual string identifyClass() {
			return "From child 1!";
		}
};

class Child2 : virtual public Base {																	//	public virtual can also be used
	protected:
		virtual ~Child2() {}
		virtual string identifyClass() {
			return "From child 2!";
		}
};

class DiamondProblem : public Child1, Child2 {
	public:
		virtual ~DiamondProblem() {}
		string identifyClass() {
			return "Diamond!";
		}
};

int main() {
	Base *diamondProblem = new DiamondProblem();														//	accessing by polymorphism
	cout << diamondProblem->identifyClass() << endl;
	delete diamondProblem;

	DiamondProblem dp;																					//	won't affected, because it's a
	cout << dp.identifyClass() << endl;																	//	direct access

	return 0;
}