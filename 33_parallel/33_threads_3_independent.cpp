/*
	Threads allows you to work on different processes at (almost) the same time.
	A thread may power up your time amount, however, you must know what to do.
*/

#include <iostream>
#include <chrono>

#if __unix__
#include <unistd.h>
#elif __WIN32__ || __WIN64__
#include <windows.h>
#endif

#include <thread>
#include <string>

using namespace std;
using namespace chrono;

void print_time(long long seconds) {
	cout	<< "duration: " << seconds / 3600 << "h, "
			<< seconds / 60 << "min, "
			<< seconds % 60 << "s" <<
	endl;
}

void long_process(int a, string s) {
	cout << "waiting patiently... " << a << s << endl;

	#if __linux__
	sleep(10);
	#elif __WIN32__ || __WIN64__
	Sleep(10000);
	#endif

	cout << "Done!" << endl;
}

int main() {
	auto start = high_resolution_clock::now();

	thread th1(long_process, 1, "abc");
	/*
		To make to run your thread in the background,
		the thread must be run with detach().
	*/
	th1.detach();

	thread th2(long_process, 2, "");

	cout << "===============================" << endl;
	cout << "waiting for created threads...." << endl;
	cout << "===============================" << endl;

	/*
		However, since a thread is now independent, it can't be
		joined by your main application. If you still try this,
		you'll get an error on runtime.

		To avoid this mistake, you can check, if the certain thread
		is able to join.
	*/
	if (th1.joinable()) {
		th1.join();
	}
	
	th2.join();

	cout << "aaaand done" << endl;
	auto end = high_resolution_clock::now();
	auto duration = duration_cast<seconds>(end - start);
	print_time(duration.count());

	return 0;
}