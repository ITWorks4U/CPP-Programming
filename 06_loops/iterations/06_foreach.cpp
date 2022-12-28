/*
	often used to loop trough
	an array without to know or
	mind, how much elements exists
*/

#include <iostream>
using namespace std;

int main() {
	int array[] = {0,1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

	for(int element : array) {										//	often used: auto keyword
		cout << element << endl;
	}

	return 0;
}