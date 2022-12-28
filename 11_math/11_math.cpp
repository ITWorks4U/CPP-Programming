/*
	For Linux: The linker needs -lm as additional compiler command,
	otherwise the functions can't be used correctly.
*/

#include <iostream>
#include <cmath>
using namespace std;

void calculate_area_circle(int radius) {
	//	M_PI is a macro from cmath
	cout << "area: " << (M_PI * radius * radius) << endl;
}

void calculate_volume_circle(int radius) {
	cout << "volume: " << (4/3 * M_PI * radius * radius * radius) << endl;
}

int main() {
	for(int i = 0; i < 50; i++) {
		calculate_area_circle(i);
		calculate_volume_circle(i);

		cout << "power of " << i << (pow((double)i, (double)i)) << endl;	//	casting is recommended
		cout << "square root of " << i << (sqrt((double)i)) << endl;
		cout << "sine of " << i << (sin((double) i)) << endl;

		//	many other functions here...
	}

	return 0;
}