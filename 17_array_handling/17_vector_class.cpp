/*
	using arrays from
	given vector class

	allows you to use
	an iterator, if you like
*/

#include <iostream>
#include <vector>
using namespace std;

int main() {
	//	vector class, where given type is defined here
	//	in that case: integer array with 16 elements
	vector<int32_t> arr = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9, 10, 11, 12, 13, 14, 15};

	//	similar to <array>:
	cout << "arr contains: " << arr.size() << " elements" << endl;

	//	for:
	for(size_t i = 0; i < arr.size(); i++) {
		cout << arr[i] << endl;
	}

	//	for-each:
	for(int32_t element : arr) {
		cout << element << endl;
	}

	//	using an iterator:
	typedef vector<int32_t>::iterator it;										//	define an own iterator
	for(it i = arr.begin(); i != arr.end(); i++) {
		cout << *i << endl;														//	a pointer is required here
																				//	to receive the value, where
																				//	that pointer points on the
																				//	given memory address
	}

	return 0;
}