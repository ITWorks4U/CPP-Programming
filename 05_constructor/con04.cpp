/*	using a constructor with parameters only	*/
#include <iostream>
#include <new>
#include <cstring>																	//	to use the functions: strncpy(), strlen()
#include <cstdio>
using namespace std;

/*
 *	The class below will show you about how to use the "copy constructor concept"; Whenever you're using pointers in your class you should define
 *	a copy constructor which allows you to create two different instances.
*/
class CExample {
	char *firstName;
	char *familyName;

	public:
		CExample(char *name, char *family) {										/*	←	constructor unit									*/
			cout << " default constructor..." << endl;

			this->firstName = new char[strlen(name) + 1];
			strncpy(this->firstName, name, strlen(name) + 1);

			this->familyName = new char[strlen(family)];
			strncpy(this->familyName, family, strlen(family) + 1);
		}
		
		CExample(const CExample& copy) {											/*	←	a copy constructor comes with the class with a `&`	*/
			cout << " copy constructor unit..." << endl;
			
			this->firstName = new char[strlen(copy.firstName) + 1];					//	copy the values
			strncpy(this->firstName, copy.firstName, strlen(copy.firstName) + 1);

			this->familyName = new char[strlen(copy.familyName) + 1];
			strncpy(this->familyName, copy.familyName, strlen(copy.familyName) + 1);
		}

		void testMethod(CExample *object) {											/*	←	a simple test method to see your results			*/
			printf(" → Given object is located on memory %p\n", object);
			cout << " " << object->getFirstName() << "," << object->getFamilyName() << endl;
		}

		char *getFirstName() {														/*	←	returning the first name							*/
			return this->firstName;
		}

		char *getFamilyName() {														/*	←	returning the last name								*/
			return this->familyName;
		}

		void changeName(char *name, char *family) {									/*	←	let's change some values							*/
			strncpy(this->firstName, name, strlen(name) + 1);
			strncpy(this->familyName, family, strlen(family) + 1);
		}

		~CExample() {																/*	←	destructor											*/
			delete firstName;
			delete familyName;
		}
};

int main() {	
	CExample *ex = new CExample("Ann", "Droid");
	ex->testMethod(ex);

	CExample *anotherOne = new CExample(*ex);										//	this is the part, where the copy constructor is going to work
	anotherOne->testMethod(anotherOne);

	cout << " ----------------------" << endl << " modifying values for object \"anotherOne\"" << endl << endl;

	anotherOne->changeName("Rob", "Ott");
	ex->testMethod(ex);
	anotherOne->testMethod(anotherOne);

	delete anotherOne;
	delete ex;

	return 0;
}
