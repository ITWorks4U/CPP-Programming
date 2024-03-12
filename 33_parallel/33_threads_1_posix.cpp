/*
	Threads allows you to work on different processes at (almost) the same time.
	In C++ there're multiple ways to realize this:
	-	using POSIX threads (not recommended for C++, only for C)
	-	using C++ threads

	A thread may power up your time amount, however, you must know what to do.

	POSIX-threads are using:
	-	C-function(s)
	-	raw pointers

	for more details about POSIX-threads take a look there: https://www.youtube.com/watch?v=0JLpmPcik0E
*/

#include <iostream>
#include <chrono>

/*	assuming, you're using UNIX/Linux or Windows	*/
#if __unix__
#include <unistd.h>
#elif __WIN32__ || __WIN64__
#include <windows.h>
#endif

/*	accessing to POSIX-threads	*/
#include <pthread.h>

using namespace std;
using namespace chrono;

/*
	In C++ it's recommended, sometimes required, to use a C native function for POSIX threads,
	otherwise your application might not build or you're getting warnings or an undefined
	behavior on runtime.
*/
extern "C" {
	void *long_process(void *arg);
}

void print_time(long long seconds) {
	cout	<< "duration: " << seconds / 3600 << "h, "
			<< seconds / 60 << "min, "
			<< seconds % 60 << "s" <<
	endl;
}

/*
	A POSIX-threads always starts with void*, followed by
	any name with a void* as an argument.
*/
void *long_process(void *arg) {
	cout << "waiting patiently..." << endl;

	#if __linux__
	sleep(10);
	#elif __WIN32__ || __WIN64__
	Sleep(10000);
	#endif

	cout << "Done!" << endl;

	/*	by default: NULL (C-NULL) returns	*/
	return NULL;
}

int main() {
	auto start = high_resolution_clock::now();

	/*	declaring two threads	*/
	pthread_t thread1, thread2;

	/*
		creating and automatically running the POSIX-threads
	
		int pthread_create(
			pthread_t *__restrict__ __newthread,								//	address for POSIX-thread object
			const pthread_attr_t *__restrict__ __attr,							//	optional:	an attribute for the certain thread; NULL: no attribute is given
			void *(*__start_routine)(void*),									//	the thread function to use
			void *__restrict__ __arg)											//	optional:	any single argument for the thread function; NULL: no argument is given
		noexcept(true);

		returns -1 on error, 0 on success (typically for lower level C);
		in C++ no exception is going to throw on error => Undefined behavior occurs!
	*/
	pthread_create(&thread1, NULL, long_process, NULL);
	pthread_create(&thread2, NULL, long_process, NULL);

	cout << "===============================" << endl;
	cout << "waiting for created threads...." << endl;
	cout << "===============================" << endl;

	/*
		waiting for thread(s) to finish

		int pthread_join(
			pthread_t th,														//	thread to wait for
			void **__thread_return												//	optional:	the return value can be used in the future; NULL: We don't care.
		);

		returns -1 on error, 0 on success (typically for lower level C)
	*/
	pthread_join(thread1, NULL);
	pthread_join(thread2, NULL);

	cout << "aaaand done" << endl;
	auto end = high_resolution_clock::now();
	auto duration = duration_cast<seconds>(end - start);
	print_time(duration.count());

	return 0;
}