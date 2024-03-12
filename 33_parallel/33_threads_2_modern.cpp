/*
	Threads allows you to work on different processes at (almost) the same time.
	In C++ there're multiple ways to realize this:
	-	using POSIX threads (not recommended for C++, only for C)
	-	using C++ threads

	A thread may power up your time amount, however, you must know what to do.

	Unlike to POSIX-threads the thread class is more usable and allows you to work smarter.
*/

#include <iostream>
#include <chrono>

#if __unix__
#include <unistd.h>
#elif __WIN32__ || __WIN64__
#include <windows.h>
#endif

/*	library for C++-threads	*/
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

/*
	Threads might have no arguments or may have n arguments to work with.
	However, there're some restrictions:
	-	function overload is not supported
	-	a thread function without arguments must not called with arguments
*/
void long_process_no_arguments() {
	cout << "waiting patiently... " << endl;

	/*	comparing to POSIX-threads:	pthread_self()	*/
	cout << "by the way, this is the thread-ID: " << this_thread::get_id() << endl;

	#if __linux__
	sleep(10);
	#elif __WIN32__ || __WIN64__
	Sleep(10000);
	#endif

	cout << "Done!" << endl;
}

/*
	You also can use argument(s) for your thread function(s).
	There's no limit, however, some restrictions:
	-	a thread function must not have a default assigned argument
	-	when a thread is created, the certain argument(s) must be added, too
*/
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

	/*
		Creating a new thread instance with the thread function to work with.
		Similar to the POSIX-threads your thread runs automatically after creation.
	*/
	thread th1(long_process, 1, "abc");
	thread th2(long_process_no_arguments);

	cout << "===============================" << endl;
	cout << "waiting for created threads...." << endl;
	cout << "===============================" << endl;

	/*
		Unlike to POSIX-threads every joinable thread MUST be joined,
		otherwise you'll receive an error on runtime, even your build
		process had no reported any error(s) or warning(s).

		void join();
		Wating until the thread has been terminated.
	*/
	th1.join();
	th2.join();

	cout << "aaaand done" << endl;
	auto end = high_resolution_clock::now();
	auto duration = duration_cast<seconds>(end - start);
	print_time(duration.count());

	return 0;
}