/*	demonstration of a sinleton pattern	*/
#include <iostream>
#include <pthread.h>																				//	← required for thread functons (comes from C programming)
#include <errno.h>
#include <cstdio>
#include "singletonThread.hpp"
using namespace std;

#define	FAILURE				1

int main() {
	pthread_t threads[NBR_OF_THREADS];
	
	/*	create sub threads	*/
	for (int i = 0; i < NBR_OF_THREADS; i++) {
		if ((pthread_create(&threads[i], NULL, &threadFunction, (void*) &i)) != 0) {				//	check, if any sub thread creation failed
			perror(" pthread_create");
			return FAILURE;
		}
	}

	/*	waiting for all threads	*/
	for (int i = 0; i < NBR_OF_THREADS; i++) {
		if ((pthread_join(threads[i], NULL)) != 0) {												//	check, if any sub thread joing failed
			perror(" pthread_join");
			return FAILURE;
		}
	}

	return 0;
}
