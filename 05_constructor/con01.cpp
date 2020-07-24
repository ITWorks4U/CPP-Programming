/*	a simple class without a constructor or destructor	*/
#include <iostream>
#include <new>
using namespace std;

/*	The class below won't have a constructor or destructor, however, we're able to create an instance of this class.	*/
class CExample {
	double value;								//	private by default (see: C++ programming part 4)

	public:
		void setValue(double value) {
			this->value = value;
		}

		double getValue() {
			return this->value;
		}		
};

int main() {
	CExample *ex = new CExample();				//	calling the default constructor → since C++ if no constructor is defined,
												//	then the compiler is going to create a default constructor automatically

	ex->setValue(15);
	cout << " value = " << ex->getValue() << endl;

	delete ex;
	return 0;
}
