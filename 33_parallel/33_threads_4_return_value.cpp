/*
	You can also use a return value for your threads, if you like.
	There're many ways to realize this.
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

/*	required to receive the return value	*/
#include <future>

using namespace std;
using namespace chrono;

void print_time(long long seconds) {
	cout	<< "duration: " << seconds / 3600 << "h, "
			<< seconds / 60 << "min, "
			<< seconds % 60 << "s" <<
	endl;
}

/*
	1st way: Using a void function and setting a value to the given argument.
*/
void thread_return_value(promise<int> &&p) {
	p.set_value(42);
}

/*
	2nd way: Using a "normal" function with the certain return value.
*/
int long_process(int a, string s) {
	cout << "waiting patiently... " << a << s << endl;

	#if __linux__
	sleep(10);
	#elif __WIN32__ || __WIN64__
	Sleep(10000);
	#endif

	cout << "Done!" << endl;

	return a;
}

int main() {
	auto start = high_resolution_clock::now();

	/*	1st way:	*/
	promise<int> p;
	auto f0 = p.get_future();
	thread th0(&thread_return_value, move(p));
	th0.join();
	cout << "return value #1 from thread: " << f0.get() << endl;

	/*	2nd way:	*/
	auto f1 = async(long_process, 3, "zzz");
	cout << "return value #2 from thread: " << f1.get() << endl;

	/*	attention:	Your application takes more time, than the expected 10 seconds!	*/

	thread th1(long_process, 1, "abc");
	th1.detach();

	thread th2(long_process, 2, "");

	cout << "===============================" << endl;
	cout << "waiting for created threads...." << endl;
	cout << "===============================" << endl;

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