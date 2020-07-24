/*	function overload example	*/
#include <iostream>
#include <string>
#include <new>
using namespace std;

/*
 *	Since C++ you're able to overload methods for your own purpose. Means, you may define a function,
 *	where the name for all functions are equal, but each function has it's own purpose. There is a
 *	more powerful operation: template (comes soon).
*/
class COverloading {
	public:
		void printOut(int value);				//	for each value of type int only
		void printOut(float value);			//	for each value of type float only
		void printOut(string word);				//	for each value of type string only
};

void COverloading::printOut(int value) {
	cout << " int value = " << value << endl;
}

void COverloading::printOut(float value) {
	cout << " float value = " << value << endl;
}

void COverloading::printOut(string word) {
	cout << " word = " << word << endl;
}

int main() {
	int number = 42;
	float massElectron = 9.1093897E-31;
	string word = "This is a C++ string!";

	COverloading *ov = new COverloading();
	ov->printOut(number);						//	now we can call our class method where we don't
	ov->printOut(massElectron);					//	need to know which function should be called
	ov->printOut(word);							//	see: Java (System.out.println(boolean b); System.out.println(int i); System.out.println(long l);...)

	delete ov;
	return 0;
}
