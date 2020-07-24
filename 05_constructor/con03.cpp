/*	using a constructor with parameters only	*/
#include <iostream>
#include <new>
#include <cstdlib>
#include <ctime>
using namespace std;

/*
 *	The class below has a constructor with only one parameter. However, you can't create an instance of
 *	this class without parameters unless you have also defined a default constructor by your own.
*/
class CExample {
	double *arr;

	public:
		CExample(int nbrOfElements) {
			srand(time(NULL));
			this->arr = new double[nbrOfElements * sizeof(double)];

			for (int i = 0; i < nbrOfElements; i++) {
				arr[i] = rand(); 
			}
		}

		double *getArrayForOutput() {
			return this->arr;
		}

		~CExample() {
			delete arr;
		}
};

int main() {
	//CExample *ex = new CExample();										//	try to create an instance of this class without a paramter → the program won't compile

	int size = 5;
	CExample *ex = new CExample(size);										//	now it works

	double *test = reinterpret_cast<double *>(ex->getArrayForOutput());

	for (int i = 0; i < size; i++) {
		cout << " test[" << i << "] = " << test[i] << endl;
	}

	delete ex;
	return 0;
}
