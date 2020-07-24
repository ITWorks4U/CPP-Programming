#include <iostream>
#include <thread>
using namespace std;

void callFromThread(int threadNbr) {
	cout << " Hello World! This is thread #" << threadNbr << endl;
}

const int NBR_OF_THREADS = 16;

int main() {
	thread thr[NBR_OF_THREADS];

	for (int i = 0; i < NBR_OF_THREADS; i++) {
		thr[i] = thread(callFromThread, i);

		if (i % 2 == 0) {
			cout << " thread [" << i << "] detached " << endl;
			thr[i].detach();
		}
	}

	cout << " *** main function *** " << endl;

	for (int i = (NBR_OF_THREADS - 1); i >= 0; i--) {
		if (thr[i].joinable()) {
			thr[i].join();
			cout << " thread [" << i << "] joined " << endl;
		} else {
			cout << " thread [" << i << "] is not joined " << endl;
		}
	}
	
	return 0;
}
