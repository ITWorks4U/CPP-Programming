/*	smart pointers #3:	shared_ptr	*/

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
	cout << p1.get() << endl;
	p1->print();
	
	shared_ptr<CExample> p2(p1);
	cout << p2.get() << endl;
	p2->print();
	
	cout << p1.use_count() << endl;
	cout << p2.use_count() << endl;
	
	p1.reset();
	cout << p2.use_count() << endl;
	
	return 0;
}
