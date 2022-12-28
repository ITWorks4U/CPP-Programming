#include <iostream>
using namespace std;

int main() {
	/*
		simple check for different results
	*/

	int number;
	cin >> number;

	switch(number) {												//	determiantion for given number
		case 0:														//	only, if number contains 0
			break;													//	required, otherwise the next
																	//	case is also in use
		case 1:														//	only, if number contains 1
			break;
		case 823648249:												//	...
			break;
		case -9628364:
			break;
		default:													//	handles every other case, which
			break;													//	hasn't been handled before
	}

	return 0;
}