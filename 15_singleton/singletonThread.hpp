#ifndef SINGLETON_THREAD_HPP
#define SINGLETON_THREAD_HPP

/*	same class definition */
class CSingleton {
	static CSingleton *instance;									//	instance to use
	CSingleton() {}													//	the constructor is set to private

	public:
		static CSingleton* getInstance();
};

#define	NBR_OF_THREADS		8										//	let's use eight threads

/*	declaring a function for threads → for more details: see C programming part 41 + 42		*/
void *threadFunction(void *arg);

#endif
