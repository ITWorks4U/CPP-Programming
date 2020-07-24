/*	smart pointers #2:	unique_ptr	*/

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
	unique_ptr<CExample> p1(new CExample);
	p1->print();
	cout << p1.get() << endl;
	
	unique_ptr<CExample> p2 = move(p1);
	p2->print();
	cout << p2.get() << endl;
	
	cout << p1.get() << endl;
	
	return 0;
}
