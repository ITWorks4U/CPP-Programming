/*	smart pointers #1:	auto_ptr
 * 	deprecated since C++11, removed since C++17
*/

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
	auto_ptr<CExample> p1(new CExample);
	p1->print();
	
	cout << p1.get() << endl;
	
	auto_ptr<CExample> p2(p1);
	cout << p1.get() << endl;
	cout << p2.get() << endl;
	
	p2->print();
	
	return 0;
}
