/*	threads vol 2: using threads with classes and lambda expressions */
#include <thread>
#include "threads_vol2.hpp"

int main() {
	cout << " threads 1, 2 and 3 are operating independently..." << endl;
	
	/*	using a thread function	*/
	thread th_function(threadFunction, 1);
	
	/*	using a thread service (from class CThread)	*/
	thread th_object(CThread(), 2);
		
	/*	using threads by lambda expressions	*/
	auto lambdaThread = [](int x) {
		for (int i = 0; i < x; i++) {
			cout << " this thread is using the lambda expression as callable " << endl;
		}
	};
	
	thread th_lambda(lambdaThread, 3);
	
	th_lambda.join();
	th_object.join();
	th_function.join();
	
	return 0;
}
