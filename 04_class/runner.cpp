#include <iostream>
#include <new>														//	← in use for operators `new`, `delete` and many more
#include "classes.hpp"
using namespace std;

int main() {
	/*	static box	*/
	CBox box1;														//	create an instance of CBox

	//box1.width = 15;												//	causes a compiler error, because the member 'width' and also 'height' and 'breadth' are private

	box1.setWidth(10);												//	we're using a dot '.' to access to a member function
	box1.setHeight(15);
	box1.setBreadth(3);

	cout << " volume of the box1 = " << box1.calculateBoxVolume() << endl;


	/*	dynamic allocated boxes	*/
	CBox *box2 = new CBox();										//	easier to use than void *malloc(size_t size) or void *calloc(size_t nbr, size_t size)
	CBox *box3 = new CBox();
	
	box2->setWidth(2);												//	we're using an arrow '->' instead (*box2).setWidth(10): more details: C programming (part 13)
	box2->setHeight(4.6);
	box2->setBreadth(0.0003);

	cout << " volume of the box2 = " << box2->calculateBoxVolume() << endl;

	box3->setWidth(1.9555123321);
	box3->setHeight(10);
	box3->setBreadth(12);

	cout << " volume of the box3 = " << box3->calculateBoxVolume() << endl;	

	delete box3;													//	remove a created instance
	delete box2;													//	it's equal to: free(void *ptr)

	return 0;
}
