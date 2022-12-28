#include <iostream>
#include <ctime>									//	srand(), time_t, time(), ...
#include <string>

//	UNIX/Linux
#include <unistd.h>

//	Windows
// #include <windows.h>

using namespace std;

void random_password_generator(int multiply) {
	string s;
	char start_sign = '!';
	char end_sign = ('z' - 32);

	for(int i = 0; i < multiply; i++) {
		int sign = ((rand() % end_sign) + start_sign);
		s += (char) sign;
	}

	cout << "random password: " << s << endl;
}

int main() {
	time_t t;										//	custom data type from ctime
	// srand(time(&t));								//	initialize a pseudo random number event based
													//	on current t value
													//	srand(1) for debugging
													//	srand(NULL) is identical to time(&t)

	srand(time(nullptr));							//	at this point: identical to srand(NULL)

	for(int i = 1; i <= 10; i++) {
		random_password_generator(i * 10);

		sleep(1);									//	for Linux only: 1 second
		// Sleep(1000);								//	for Windows only: 1000 milliseconds
	}

	return EXIT_SUCCESS;
}