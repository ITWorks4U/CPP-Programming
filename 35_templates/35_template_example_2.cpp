/*
	Templates allows you to reduce function / class redundancies and
	also offers you a more clean code. These templates can be interpreted
	as a "shape", which allows to work with any data type in theory.

	But you should know, that not every data type can be used for anything.
*/

#include <iostream>
using namespace std;

/*	using a whole template class	*/
template <class T>
class Calculator {
	public:
		Calculator() {}
		virtual ~Calculator() {}

		/*
			Mostly the certain template methods are already implemented
			in the class. These can also be outsourced into a certain
			source file, however, there're some limitations.

			For more informations, take a look into the complex_template_example/ folder.
		*/
		T add(T a, T b) const {
			return a + b;
		}

		T sub(T a, T b) const {
			return a - b;
		}

		T mul(T a, T b) const {
			return a * b;
		}

		T div(T a, T b) const {
			return a / b;
		}
};

int main() {
	int a = 10;
	int b = 15;

	double c = 3.141;
	double d = 4e12;

	/*	to use a template class you must write the data type behind the class	*/
	Calculator<int> cInt;
	cout << "a + b = " << cInt.add(a, b) << endl;
	cout << "a - b = " << cInt.sub(a, b) << endl;
	cout << "a * b = " << cInt.mul(a, b) << endl;
	cout << "a / b = " << cInt.div(a, b) << endl;

	Calculator<double> cDouble;
	cout << "c + d = " << cDouble.add(c, d) << endl;
	cout << "c - d = " << cDouble.sub(c, d) << endl;
	cout << "c * d = " << cDouble.mul(c, d) << endl;
	cout << "c / d = " << cDouble.div(c, d) << endl;

	return 0;
}