/*	casting examples in C++	*/
#include <iostream>
#include <cstdlib>													//	C++ based library for <stdlib.h>
using namespace std;

int main() {
	/*	a default casting example	*/
	float euler = 2.1828182845904523536;
	int eulerInt = (int) euler;										//	a typical cast, where a given type is forced to become to another type
	cout << " euler = " << euler << endl;							//	in this case the content of euler will be cut into an integer, where all
	cout << " euler (converted to int) = " << eulerInt << endl;		//	numbers behind the decimal point are going to ignored by integer type

	float lightYear = 9.461E15;										//	1 ly = 6.323E4 AU = 9.461E15 m
	int lightInt = (int) lightYear;									//	What happens, if you try to convert an exponential number into an integer?
	cout << " lightYear = " << lightYear << " metre" <<endl;
	cout << " light (converted to int) = " << lightInt << endl;

	lightInt = static_cast<int>(lightYear);							//	allows you to cast a given type into another type; it's a more powerful option
	cout << " light (converted to int) = " << lightInt << endl;		//	which is able to search by the editor's search option

	/*	another casting options, which comes with C++:
	 *
	 *	reinterpret_cast<type_to_cast>(type);
	 *		→	unsave cast; allows you always to cast a type into another type, where the compiler might not compile the program
	 *	dynamic_cast<type_to_cast>(type);
	 *		→	usually used for classes and polymorphism; allows you to cast a type into another type on runnung time
	 *	const_cast<type_to_cast>(type);
	 *		→	not often used casting option; allows you to cast a const* into another type and vice versa
	*/

	/*	casting from functions	*/
	int *arr = (int *) malloc(sizeof(int) * 10);					//	void* malloc(size_t size); → in C++ you have to cast the result into a data type
	double *test = reinterpret_cast<double *>(arr);
	
	for (int i = 0; i < 10; i++) {
		cout << " arr[" << i << "] = " << arr[i] << " | test[" << i << "] = " << test[i] << endl;
	}

	free(test);														//	C-function to remove allocated memory by your own
	//free(arr);													//	← in combination with the code above you'll crash the memory
	// IMPORTANT: Be very careful about different pointers, which points to the same memory!

	return 0;
}
