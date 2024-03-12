/*
	Mostly threads are in use for shared resources, however, it's a dumb idea not to use a mechanism
	to make sure which thread now works for the shared resouce.

	You can do this by using mutex (mutual exclusion) or semaphore (not tested, because it may not be available for your application).
*/

#include <iostream>
#include <chrono>
#include <thread>
#include <string>
#include <fstream>

/*	using mutex	*/
#include <mutex>

// /*	using semaphore	*/
// #include <semaphore>

/*	A shared resource may be a file stream, network stream, database stream, ...	*/
#define	FILE_TO_USE	"test.txt"
#define	MAX_LINES	10000

using namespace std;
using namespace chrono;

#if __unix__
#include <unistd.h>
#elif __WIN32__ || __WIN64__
#include <windows.h>
#endif

static mutex m;
// std::counting_semaphore<size_t> sem(1);

void print_time(long long seconds) {
	cout	<< "duration: " << seconds / 3600 << "h, "
			<< seconds / 60 << "min, "
			<< seconds % 60 << "s" <<
	endl;
}

void readFromFile() {
	fstream source;

	try {
		/*
			in general: Using mutex or semaphore doesn't comes with an automatic releasing procedure,
			so in case of an error, you have to manage this lock in an another way.
		*/

		/*	for semaphore:
			acquire:	locking the resouce => may fail, if the resource is already in use
			try_aquire:	checking, the the resource can now be used => often combined with a while-sleep(1)-loop
			try_acquire_for(std::chrono::seconds(1)):	C++20:	using a timeout for acquire
		*/
		// sem.acquire();
		// if (sem.try_acquire()) {}
		// if (sem.try_acquire_for(std::chrono::seconds(1))) {}
		
		/*
			for mutex:
			m.lock:		locking the resouce => may fail, if the resource is already in use
			m.try_lock:	checking, the the resource can now be used => often combined with a while-sleep(1)-loop
		*/
		if (!m.try_lock()) {
			cout << "waiting for reading..." << endl;

			#if __linux__
			sleep(1);
			#elif __WIN32__ || __WIN64__
			Sleep(1000);
			#endif
		}

		source.open(FILE_TO_USE, ios_base::in);

		string tmp;
		while (!source.eof()) {
			getline(source, tmp);
			cout << tmp << endl;
		}

		source.close();

		/*	releasing the lock by hand only	*/
		m.unlock();
		// sem.release();
	} catch (exception &e) {
		/*	primitive and a dumb way to "automatically close" a file stream	*/
		source.close();

		cerr << "critical error for read detected: " << e.what() << endl;
	}
}

void writeToFile() {
	fstream destination;

	try {
		if (!m.try_lock()) {
			cout << "waiting for writing..." << endl;

			#if __linux__
			sleep(1);
			#elif __WIN32__ || __WIN64__
			Sleep(1000);
			#endif
		}

		destination.open(FILE_TO_USE, ios_base::out);

		for(int i = 0; i < MAX_LINES; i++) {
			destination << "line nbr. " << i+1 << endl;
		}

		destination.close();
		m.unlock();
	} catch (exception &e) {
		destination.close();
		cerr << "critical error for write detected: " << e.what() << endl;
	}
}

int main() {
	auto start = high_resolution_clock::now();

	thread th1(writeToFile);
	thread th2(readFromFile);

	cout << "===============================" << endl;
	cout << "waiting for created threads...." << endl;
	cout << "===============================" << endl;

	th1.join();
	th2.join();

	cout << "aaaand done" << endl;
	auto end = high_resolution_clock::now();
	auto duration = duration_cast<seconds>(end - start);
	print_time(duration.count());

	return 0;
}