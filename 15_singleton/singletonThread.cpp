#include <iostream>
#include <new>
#include <cassert>
#include "singletonThread.hpp"
using namespace std;

CSingleton *CSingleton::instance = NULL;

CSingleton* CSingleton::getInstance() {
	if (instance == NULL) {
		instance = new CSingleton();
	}

	return instance;
}

/*	implementation of a thread function	handler	*/
void *threadFunction(void *arg) {
	assert(arg != NULL);

	CSingleton *object[NBR_OF_THREADS];
	int *nbrPtr = reinterpret_cast<int *>(arg);
	int threadNbr = nbrPtr[0];
	
	cout << " I'm thread " << threadNbr << " with ID " << pthread_self() << "." << endl;

	for (int i = 0; i < NBR_OF_THREADS; i++) {
		object[i] = CSingleton::getInstance();	
		cout << " address location of object " << i << ": " << &(*object[i]) << endl;
	}

	cout << endl;

	return NULL;
}
