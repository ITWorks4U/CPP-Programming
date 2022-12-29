/*
	Handling arrays like in C.
*/

#include <iostream>
using namespace std;

int main() {
	//	It's possible to use C-arrays.
	int array[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	size_t elements_wrong = sizeof(array);										//	Determine array elements? No!
	size_t elements_correct = sizeof(array) / sizeof(array[0]);					//	correct way to determine array elements

	cout << "wrong way: array contains " << elements_wrong << " elements" << endl;
	cout << "correct way: array contains " << elements_correct << " elements" << endl;

	for(size_t i = 0; i < elements_correct; i++) {
		cout << array[i] << endl;
	}

	/*
		elements_wrong gives you the amount of bytes of the given array
		depending on the amount of elements and their data type,
		therefore elements_wrong gives you 64 "array elements",
		16 elements * 4 byte for each element,
		whereas elements_correct gives you 16 expected elements
	*/

	//	"lazy way": iterates automatically trough the whole array (16 times)
	for(int a : array) {
		cout << a << endl;
	}

	return 0;
}