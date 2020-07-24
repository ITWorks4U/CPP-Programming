/*	smart pointers #4:	weak_ptr	*/

#include <iostream>
#include <memory>
using namespace std;

class CExample {
	public:
		void print() {
			cout << " Hello there! " << endl;
		}
};

int main() {
	shared_ptr<CExample> p1(new CExample);
	cout << " address: " << p1.get() << endl;
	p1->print();
	
	weak_ptr<CExample> p2(p1);
	cout << " number of counts: " << p2.use_count() << endl;

	string expired = (p2.expired() ? " true" : "false");
	cout << " Is expired? " << expired << endl;
	//p2->print();														//	won't work for weak_ptr
	
	if (shared_ptr<CExample> p3 = p2.lock()) {							//	check, if p3 is able to lock p2
		cout << " shared_ptr = " << p1.get() << endl;
		cout << " number of use = " << p3.use_count() << endl;
	} else {
		cerr << " unable to get the resource " << endl;
	}

	p2.reset();
	expired = (p2.expired() ? " true" : "false");
	cout << " Is expired? " << expired << endl;
	
	if (shared_ptr<CExample> p3 = p2.lock()) {							//	try again
		cout << " shared_ptr = " << p1.get() << endl;
		cout << " number of use = " << p3.use_count() << endl;
	} else {
		cerr << " unable to get the resource " << endl;
	}
	
	return 0;
}
