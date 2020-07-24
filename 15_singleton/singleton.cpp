/*	demonstration of a sinleton pattern	*/
#include <iostream>
#include <new>
using namespace std;

/*
 *	This class below defines a singleton pattern. It's an unique class
 *	design to gain a single instance only, while you're don't using threads.
*/
class CSingleton {
	static CSingleton *instance;									//	instance to use
	CSingleton() {}													//	the constructor is set to private

	public:
		static CSingleton* getInstance();
};

CSingleton *CSingleton::instance = NULL;							//	be sure to set the instance to NULL at the beginning

CSingleton* CSingleton::getInstance() {
	if (instance == NULL) {
		instance = new CSingleton();
	}

	return instance;
}

/*	→ runner	*/
int main() {
//	CSingleton *object = new CSingleton();							//	← this won't work, because the constructor is set to private
	CSingleton *object01 = CSingleton::getInstance();
	CSingleton *object02 = CSingleton::getInstance();

	cout << " address location of object01: " << &(*object01) << endl;
	cout << " address location of object02: " << &(*object02) << endl;

	return 0;
}
