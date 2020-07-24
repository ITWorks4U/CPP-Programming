#ifndef THREADS_VOL2_HPP
#define THREADS_VOL2_HPP

#include <iostream>
using namespace std;

void threadFunction(int x) {
	for (int i = 0; i < x; i++) {
		cout << " a thread is using this function as callable " << endl;
	}
}

class CThread {
	public:
		void operator()(int x) {
			for (int i = 0; i < x; i++) {
				cout << " a thread is using this object as callable " << endl;
			}
		}
};

#endif
