/*	basic usage for constructor and destructor	*/
#include <iostream>
#include <new>
#include <cstdlib>												//	for NULL operator, srand(), rand()
#include <ctime>												//	for time() function
using namespace std;

/*
 *	The class below has a constructor and destructor.
 *	constructor: allows to initiate objects of it's class (in this case: create an array of type double with 10 elements and random content)
 *		→	holds the name of it's class
 *		→	doesn't has a return type
 *		→	you can't declare a constructor with `static` or `const`
 *
 *	destructor:	like a constructor this holds the name of your class, where the symbol `~` is the first character; whenever you're allocating
 *				memory you have to remove unused memory by your own. You don't need to remove allocated memory from outside of this class,
 *				your destructor will do this job.
 *		→	like a constructor you can't declare a destructor with `static` or `const`
 *		→	a destructor doesn't has a return type, too
*/
class CExample {
	double *arr;												//	a double field as pointer

	public:
		CExample() {
			srand(time(NULL));
			this->arr = new double[10 * sizeof(double)];		//	a typical allocation with new
			//this->arr = new double(10);						//	← works, too

			for (int i = 0; i < 10; i++) {
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
	CExample *ex = new CExample();								//	create an instance of this class, where the double array is also going to create automatically

	/*	both operations	below are valid	*/
//	double *test = reinterpret_cast<double *>(ex->getArrayForOutput());
	double *test = ex->getArrayForOutput();

	for (int i = 0; i < 10; i++) {
		cout << " test[" << i << "] = " << test[i] << endl;
	}

	delete ex;													//	delete *ex → the allocated memory for *arr will also removed automatically
	return 0;
}
