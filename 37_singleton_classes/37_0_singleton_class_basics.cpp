/*
	Singleton classes can be useful to declare only
	a single instance of a class.

	But not every time a singleton class is useful.
	In combination with threads, clusters, inheritance there's
	no guarantee to work well with it.
*/
#include <iostream>
#include <string>
using namespace std;

class Singleton {
	/*	A singleton class shall have only a basic constructor, which is private in our case.	*/
	Singleton() {
		cout << "creating the class..." << endl;
	}

	string tmp;

	public:
		/*
			To get an instance of the class a linked reference attempt is required.
			Since a function / method is marked with '*' it's NOT a pointer!
			The keyword 'static' helps us to create a single instance of the class during runtime.

			It doesn't matter how often "getInstance()" has been called.
			The first call only creates the instance once.
		*/
		static Singleton *getInstance() {
			cout << "getting instance of the class..." << endl;

			static Singleton itself;
			return &itself;
		}

		/*
			It makes no sense to create other constructors, like this...
			Of course you CAN do this, however, your concept of a singleton class does no longer exist.
		*/
		Singleton(string s) {	/*	...	*/	}

		/*
			A destructor is optional, but it helps you often out.
		*/
		virtual ~Singleton() {
			cout << "destroying..." << endl;
		}

		/*	functions for the singleton class...	*/
		void meme() {
			cout << "This function goes brrrrrrrr." << endl;
		}

		void updateTmp(string tmp) {
			this->tmp = tmp;
		}

		string getTmp() const {
			return this->tmp;
		}
};

int main() {
	/*
		Since a singleton class is going to use, you can't create
		a single instance by the normal known way, because the basic
		constructor is private.
	*/
	// Singleton s;

	/*	creating only 1 instance of the singleton class; no matter how often you'll do this	*/
	Singleton *s = Singleton::getInstance();
	Singleton *s2 = Singleton::getInstance();
	
	/*	since s and s2 are "pointers", we can take a look where on runtime the instance has been stored on the memory	*/
	cout << s << endl;
	cout << s2 << endl;

	s->meme();
	s->updateTmp("This is a singleton example.");
	cout << s->getTmp() << endl;

	s2->meme();
	s2->updateTmp("This is a singleton example #2.");
	cout << s2->getTmp() << endl;

	/*
		However, s and s2 are NOT pointers, thus the delete attempt causes crashes on runtime.
		When the scope of s, s2, ... ends, the destructor of the singleton is going to call automatically.
		Thus, there's no need to delete this instance by hand.
	*/
	// delete s2;
	// delete s;

	/*
		It's also possible to create, if given, an another instance of the singleton class, however,
		at this time your singleton class doesn't exist in that context anymore.
	*/
	Singleton s3("aaaa");

	/*
		Unlike to s and s2, s3 must be marked with '&' to get the address of this object.
		In contrast to s and s2, 's3' also has an another address on runtime.
	*/
	cout << &s3 << endl;

	return 0;
}