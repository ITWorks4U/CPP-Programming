/*
	recursions allows you to call a function
	again and again... and again, while a
	given break condition is not given

	often used for math operations

	tow kinds of recursion exists:
		-	direct recursion:		a function calls itself
		-	indirect recursion:		a function calls an another function,
									whereas this function calls the previous function
*/

#include <iostream>
using namespace std;

//	---------------
//	direct recursion
//	---------------
int calculate_gcd(int a, int b) {
	if (a < b) {											//	swapping a and b, if required
		int tmp = a;
		a = b;
		b = tmp;
	}

	if (a == b) {
		return a;
	}

	return calculate_gcd(a - b, b);
}

//	---------------
//	indirect recursion
//	---------------
void function1(int value);
void function2(int value);

void function1(int value) {
	function2(--value);										//	calling function 2 (starting with 99, 98, 97, ...)
}

void function2(int value) {
	if (value > 0) {										//	"while" value is > 0 (for 99, 98, 97, ...)
		function1(value);									//	call function 1
	} else {
		cout << "It ends here!" << endl;					//	otherwise it ends here
	}
}

//	---------------
//	main function
//	---------------
int main() {
	int a = 1920;
	int b = 1080;

	cout << "GCD (" << a << ", " << b << ") = " << calculate_gcd(a,b) << endl;
	cout << "GCD (" << b << ", " << a << ") = " << calculate_gcd(b,a) << endl;

	function1(100);

	return 0;
}