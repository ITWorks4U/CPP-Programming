/*
	some samples for a time measurement;
	it's possible to use the C-library,
	however, in C++ there's an alternative
	way to do this
*/

#include <iostream>
#include <chrono>												//	contains time measurement
using namespace std;
using namespace chrono;

void print_time(long long seconds) {
	cout	<< "duration: " << seconds / 3600 << "h, "
			<< seconds / 60 << "min, "
			<< seconds % 60 << "s" <<
	endl;
}

int main() {
	auto start = high_resolution_clock::now();					//	auto keyword is prefered
	cout << "waiting paitently..." << endl;

	while(true) {
		if (cin.get()) {										//	reading an enter key anytime
			break;
		}
	}

	cout << "Thanks!" << endl;
	auto end = high_resolution_clock::now();
	auto duration = duration_cast<seconds>(end - start);
	print_time(duration.count());

	return 0;
}